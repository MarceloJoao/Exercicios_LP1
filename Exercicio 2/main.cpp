#include <iostream>
#include <list>
using namespace std;
int main() {
  //implementando uma pilha com uma lista
  list<int> pilha;
  int temp;
  for(int i=0; i<5;i++){
    cin >> temp;
    pilha.push_back(temp);
  }
  cout << "Valores na pilha: ";
  for (auto i : pilha) {
    cout << i << " ";
  }
  cout << endl;
  // removendo o de cima
  pilha.pop_back();
  cout << "Valores após remover o de cima ";
  //imprimindo sem o elemento mais recente
  for (auto i : pilha) {
    cout << i << " ";
  }
}