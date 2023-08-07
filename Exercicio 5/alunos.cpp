#include <fstream>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct media {
  int nota1;
  int nota2;
  int nota3;
  int media;
};
map<string, media> alunos;

void cadastrarNotas(string nome, int nota1, int nota2, int nota3) {
  alunos[nome].nota1 = nota1;
  alunos[nome].nota2 = nota2;
  alunos[nome].nota3 = nota3;
  alunos[nome].media = (nota1 + nota2 + nota3) / 3;

  fstream arquivo;
  arquivo.open("Notas.txt", ios::out | ios::app);
  arquivo << nome << endl;
  arquivo << nota1 << endl;
  arquivo << nota2 << endl;
  arquivo << nota3 << endl;
  arquivo << alunos[nome].media << endl;

  fstream arquivoler;
  arquivoler.open("alunos.txt", ios::in);
  string linha;
  vector<string> vetor;
  
  while(getline(arquivoler, linha)){
    vetor.push_back(linha);
  }
  arquivoler.close();
  
  for(int i = 0; i< vetor.size(); i+=5){
    nome = vetor[i];
    alunos[nome].nota1 = stoll(vetor[i+1]);
    alunos[nome].nota2 = stoll(vetor[i+2]);
    alunos[nome].nota3 = stoll(vetor[i+3]);
  }
}
void imprimir_media(){
  for(auto i: alunos){
    cout << i.first << endl;
    cout << i.second.media << endl;
  }
}