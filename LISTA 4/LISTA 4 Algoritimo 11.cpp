/*Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os
elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos
pares e impares.*/
#include<iostream>
using namespace std;

int main(){
    int v[20], elem, i, somap, somai;
    for(i = 0; i < 20; i++){
        cout << "\tInsira o " << i+1 << "º elemento: ";
        cin >> elem;
        v[i] = elem * elem;
    }
    for(i = 0; i < 20; i++){
        if(v[i] % 2 == 0){
            somap += v[i];
        }else{
            somai += v[i];
        }
    }
    cout << "\tA soma dos elementos impares é " << somai << " e a soma dos elementos pares é " << somap;
}