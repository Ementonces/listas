#include <iostream>
using namespace std;

int main()
{
   int idade, valor;
   valor = 100;
   cout << "\tdigite sua idade: ";
   cin >> idade;
   if(idade <= 10 && idade > 0){
       valor = valor + 80;
       cout << "\tvalor total a se pagar: R$" << valor;
   }
   if(idade > 10 && idade <= 30){
       valor = valor + 50;
       cout << "\tvalor total a se pagar: R$" << valor;
   }
   if(idade > 30 && idade < 60){
       valor = valor + 95;
       cout << "\tvalor total a se pagar: R$" << valor;
   }
   if(idade >= 60 && idade < 121){
       valor = valor + 130;
       cout << "\tvalor total a se pagar: R$" << valor;
   }
   if(idade < 0 || idade > 122){
       cout << "\terro, idade invalida";
   }
}
