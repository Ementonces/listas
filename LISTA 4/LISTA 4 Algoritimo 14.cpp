/*Elabore um algoritmo que leia um vetor de 20 posições de inteiros e verifique se ele é um palíndromo, ou
seja, se a sua leitura em qualquer direção é a mesma.*/
#include <iostream>
using namespace std;

int main(){
    int V[20], x = 0;
    for(int i = 0; i < 20; i++){
        cout << "\tInsira um numero no indice " << i+1 << ": ";
        cin >> V[i];
    }
    for(int i = 0; i < 10; i++){
        if(V[i] == V[19-i]){
            x++;
        }
        if(i == 9 && x == 10){
            cout << "\tEsse vetor é um palindromo";
        }else{
            if(i == 9){
                cout << "\tEsse vetor não é um palindromo\n";
            }
        }
    }
    for(int i = 0; i < 20; i++){
        cout << V[i] << " ";
    }
    cout << x;
}