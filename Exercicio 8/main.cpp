#include <iostream>
using namespace std;
int soma_num(int a, int b){
  if(a == b){
    return a;
  }else if(a > b){
    return soma_num(b,a);
  }else{
    return a + soma_num(a+1, b);
  }
}
int main() {
 int n1, n2;
 cout << "Digite dois numeros: ";
 cin >> n1;
 cin >> n2;
 cout << "A soma dos numeros entre " << n1 << " e " << n2 << " é: ";
 cout << soma_num(n1, n2) << endl;

  return 0;
}