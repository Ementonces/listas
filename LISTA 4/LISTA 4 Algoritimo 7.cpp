/*Elabore um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/
#include<iostream>
using namespace std;

int main(){
    int a[10], b[10], c[10];
    for(int i = 0; i < 10; i++){
        cout << "\t Insira dois numeros inteiros: ";
        cin >> a[i] >> b[i];
    }  
    for(int i = 0; i < 10; i++){
        c[i] = a[i] * b[i];
    }
    cout << "\tResultado\n";
    for(int i = 0; i < 10; i++){
        cout << a[i] << "\tx\t" << b[i] << "\t=\t" << c[i] << endl;
    }
}