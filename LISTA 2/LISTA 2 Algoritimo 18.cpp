#include<iostream>
using namespace std;

int main()
{
    int parcelas;
    float valorTotal, valorParcela;
    cout << "\tInsira o valor da sua compra: ";
    cin >> valorTotal;
    cout << "\tInsira a quantidade de parcelas da Suas parcelas: ";
    cin >> parcelas;
    cout << "\tInsira o valor das parcelas: ";
    cin >> valorParcela;
    if(valorParcela < (valorTotal / (float)parcelas)){
        
    }
    else{
        if(valorParcela == (valorTotal / (float)parcelas)){
            cout << "\tSuas parcelas não tem juros";
        }
        else{
            cout << "\tSuas parcelas tem juros";
        }
    }
}