#include<iostream>
using namespace std;

int main(){
    float valor, valorTotal;
    int parcelas, pergunta;
    parcelas = 1;
    
    cout << "\tqual o valor das suas compras?\n";
    cin >> valor;
    cout << "\tgostaria de suascompras parceladas ou a vista?\n\t1 - a vista\n\t2 - parcelado\n";
    cin >> pergunta;
    if (pergunta == 1){
        valorTotal = valor;
    }
    else{
        cout << "\tem quantas parcelasgostaria de pagar suas compras?\n";
        cin >> parcelas;
        if(parcelas > 10){
            cout << "\tvalor invalido, o maximo de parcelas é 10\n";
            cin >> parcelas;
        }
        valorTotal = valor / parcelas;
    }
    cout << "\to valor total das suas compras foram" << valorTotal << "reais";
}