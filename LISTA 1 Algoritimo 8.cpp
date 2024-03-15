#include <iostream>
using namespace std;
int main()
{
    float dolares, reais, cotacao;
    cout << "quantos dolares voce quer converter?: ";
    cin >> dolares;
    cout << "qual a cotação atual?: ";
    cin >> cotacao;
    reais = dolares * cotacao;
    cout << "segundo a cotação atual US$" << dolares << " equivalem  a  R$" << reais ;
}