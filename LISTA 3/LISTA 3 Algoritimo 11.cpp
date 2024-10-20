/*Elabore um algoritmo que leia dois números inteiros, A e B, calcule e escreva o resto da divisão de A por
B sem usar o operador de resto (%).*/
#include <iostream>
using namespace std;

int main(){
    int A, B;

    cout << "Digite o valor do dividendo: ";
    cin >> A;
    cout << "Dijite o valor do divisor: ";
    cin >> B;
    cout << "o resto de A por B é" << ((A/B) * 100) - A;
}