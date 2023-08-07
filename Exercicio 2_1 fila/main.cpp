#include <iostream>
#include <list>
using namespace std;
int main() {
  //implementando uma fila
  list<int> fila;
  int op;
  int add;

 for(int i=0; i<5; i++){
   int temp;
   cin >> temp;
   fila.push_back(temp);
 }
  cout << "imprimindo com os valores digitados: ";
  for (auto i : fila) {
    cout << i << " ";
  }
  //adicionando na frente
  cin >> add;
  fila.push_front(add);
  cout << " imprimindo com o valor adicionado na frente:";
  for (auto i : fila) {
    cout << i << " ";
  }
  cout << endl;
  //adicionando na parte de tras
  cin >> add;
  fila.push_back(add);

  for (auto i : fila) {
    cout << i << " ";
  }
  cout << endl;
  //removendo o da frente
  fila.pop_front();
  
  for (auto i : fila) {
    cout << i << " ";
  }
  cout << endl;
  //removendo o de tras
  fila.pop_back();

  for (auto i : fila) {
    cout << i << " ";
  }
   return 0;
  }
  
