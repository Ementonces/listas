/*Elabore um algoritmo que leia um número qualquer e escreva todos os seus divisores.*/
#include <iostream>
using namespace std;

int main(){
    int numero, cont;
    cout << "\tDijite um numero qualquer: ";
    cin >> numero;
    for(cont = 1; cont <= numero; cont++){
        if(numero%cont == 0){
            cout << "\n\tEsse numero é divisivel por " << cont;
        }
    }
}