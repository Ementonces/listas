#include<iostream>
using namespace std;

int main(){
int ano;
float valor;
cout << "digite o valor do veículo: ";
cin >> valor;
cout << "digite em que ano ele foi fábricado: ";
cin >> ano;
if(ano >= 1990){
cout << "valor total: \n" << valor + (valor/100) * 1.5 << "$";
}
else{
cout << "valor total: \n" << valor + (valor/100) * 1.0 << "$";
}
}