#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <vector>
#include "alunos.hpp"
using namespace std;

int main() {
  while (true) {
    cout << "Deseja cadastrar as notas de um aluno? [Y/N] " << endl;
    char op;
    cin >> op;
    if (op == 'y') {
      string nome;
      cin >> nome;
      cout << "Digite a nota 01: ";
      int nota1;
      cin >> nota1;
      cout << "Digite a nota 02: ";
      int nota2;
      cin >> nota2;
      cout << "Digite a nota 03: ";
      int nota3;
      cin >> nota3;
      cadastrarNotas(nome, nota1, nota2, nota3);
    }else{
      break;
    }
}
  imprimir_media();
 
  return 0;
}
