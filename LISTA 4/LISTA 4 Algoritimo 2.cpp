/*Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores
pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final.*/
#include<iostream>
using namespace std;

int main(){
    int vet[20];
    for(int cont = 0; cont < 20; cont++){
        cout << "\tInsira um numero inteiro: ";
        cin >> vet[cont];
        system("clear");
    }
    cout << "\to vetor atual é ";
    for(int cont = 0; cont < 20; cont++){
        cout << vet[cont] << " ";
    }
    cout << "\n\tO vetor final sem os numeros pares ";
    for(int cont = 0; cont < 20; cont++){
        if(vet[cont] % 2 == 0){
            vet[cont] = 0;
        }
        cout << vet[cont] << " ";
    }
}