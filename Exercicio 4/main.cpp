#include <iostream>
#include <map>
using namespace std;

struct Aluno {
  string nome;
  float nota1;
  float nota2;
  float nota3;
  float media;
};
int main() {
  Aluno aluno1;
  map<int, Aluno> map1;
  cout << "Digite o nome do aluno: ";
  cin >> map1[0].nome;
  cout << "Digite a nota1: ";
  cin >> map1[0].nota1;
  cout << "Digite a nota2: ";
  cin >> map1[0].nota2;
  cout << "Digite a nota3: ";
  cin >> map1[0].nota3;
  map1[0].media = ((map1[0].nota1 + map1[0].nota2 + map1[0].nota3) / 3);

  cout << "Média de " << map1[0].nome << " é : ";
  cout << map1[0].media;
}