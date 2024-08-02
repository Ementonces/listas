/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores
positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6
é perfeito, pois 1+2+3 = 6. */
#include <iostream>
using namespace std;

int main()
{
    int n, soma = 0;
    cout << "\tinsira um numero: ";
    cin >> n;
    for(int cont = 1; cont <= n-1; cont++){
        if(n%cont == 0){
            soma = soma + cont;
        }
    }
    if(soma == n){
        cout << "o numero é perfeito";
    }else{
        cout << "o numero não é perfeito";
    }
}