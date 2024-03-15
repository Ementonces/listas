#include<iostream>
using namespace std;

int
main ()
{
  float fabrica, imposto, custoFinal;
  cout << "digite o valor de fabrica do seu carro: ";
  cin >> fabrica;
  imposto = fabrica / 100;
  custoFinal = fabrica + imposto * 73;
  cout << "o custo final do se carro foi " << custoFinal << "$";
}
