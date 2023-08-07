#include <iostream>
using namespace std;
int potencia(int base, int expoente){
  if(expoente == 0)
    return 1;
  else
    return base * potencia(base, expoente-1);
  
}
int main() {
 int num_base;
 int num_expo;
 cout <<"Digite o valor da base: " << endl;
  cin >> num_base;
  cout <<"Digite o valor do expoente: " << endl;;
  cin >> num_expo;

  cout<< "A potencia com a base " << num_base << " e o expoente "<< num_expo << " é: ";
  cout << potencia(num_base, num_expo);

  return 0;

  
}