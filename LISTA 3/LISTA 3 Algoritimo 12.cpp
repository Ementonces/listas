/*O número 3025 possui a seguinte característica: 30+25 = 55 e 55^2 = 3025. Elaborar um algoritmo que leia
N números de 4 algarismos e escreva a mensagem “positivo” se o número tiver essa característica e
“negativo” se não tiver.*/
#include <iostream>
using namespace std;

int main(){
    int cont, valor, soma;
    cout << "\tInsira quantos numeros você quer analizar: ";
    cin >> cont;

    for(cont; cont > 0; cont--){
        do{
            cout << "\tInsira um numero de quatro dijitos: ";
            cin >> valor;
            if(valor < 1000 || valor > 9999){
                cout << "\tnumero maior ou menor que 4 dijitos, insira o numero novamente\n";
            }
        }while(valor < 1000 || valor > 9999);
        soma = ((int)(valor / 100) + (valor - ((int)(valor / 100) * 100))) * ((int)(valor / 100) + (valor - ((int)(valor / 100) * 100)));
        if(valor == soma){
            cout << "\tpositivo\n";
        }else{
            cout << "\tnegativo\n";
        }
    }
}