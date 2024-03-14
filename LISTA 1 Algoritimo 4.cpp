#include<iostream>
using namespace std;
int main(){
    float numero, porcentagem, resultado;
    cout << "\tme diga um numero\n";
    cin >> numero;
    cout << "\tme diga uma porcentagem\n";
    cin >> porcentagem;
    resultado = (numero / 100) * porcentagem;
    cout << "\to resultado foi " << resultado ;
}