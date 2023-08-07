#include <iostream>
#include "header.hpp"
using namespace std;
int main(int argc, char *argv[]) {
string figura;
float lado;
float base;
float altura;
float raio;
cin >> figura;

if(figura == "quadrado"){
  cout << "digite o lado do quadrado: ";
  cin >> lado;
  cout << quadrado(lado);
}else if(figura == "triangulo"){
  cout << "digite a base do triangulo: ";
  cin >> base;
  cout << "digite a altura do triangulo: ";
  cin >> altura;
  cout << triangulo(base, altura);
}else if(figura == "retangulo"){
  cout << "digite a base do retangulo: ";
  cin >> base;
  cout << "digite a altura do retangulo: ";
  cin >> altura;
  cout << retangulo(base,altura);
}else if(figura == "circulo"){
  cout << "Digite o raio do circulo";
  cin >> raio;
  cout<< circulo(raio);
}
  
  return 0;
}