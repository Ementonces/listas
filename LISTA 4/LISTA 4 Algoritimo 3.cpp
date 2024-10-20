/*Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em
índices ímpares. Mostre somente os elementos solicitados.*/
#include<iostream>
using namespace std;

int main(){
    int vet[15], i, op;
    for(i = 0; i < 15; i++){
        cout << "\tInsira o " << i + 1 << "º numero: ";
        cin >> vet[i];
        system("clear");
    }
    do{
        cout << "\tInsira sua escolha\n\t1 - pares\n\t2 - impares\n\tescolha: ";
        cin >> op;
        if(op == 1){
            for(i = 0; i < 15; i++){
                if((i + 1) % 2 == 0){
                    cout << vet[i] << " ";
                }
            }
        }else{
            if(op == 2){
                for(i = 0; i < 15; i++){
                    if((i + 1) % 2 != 0){
                        cout << vet[i] << " ";
                    }
                }
            }else{
                cout << "\topção invalida tente novamente\n";
            }
        }

    }while(op != 1 && op != 2);
}