/*Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o
código for 1, mostrar o vetor na ordem direta (do primeiro até o último), se o código for 2, mostrar o vetor
na ordem inversa (do último até o primeiro).*/
#include<iostream>
using namespace std;

int main(){
    int vet[20], cod, cont = 0;
    bool val;
    do{
        cout << "\tdijite um valor inteiro: ";
        cin >> vet[cont];
        cont++;
    }while(cont < 20);
    system("clear");
    do{
        cout << "\tinsira o codigo\n\t1 - ordem de escrita\n\t2 - ordem inversa\n\t";
        cin >> cod;
        if(cod == 1){
            for(cont = 0; cont < 20; cont++){
                cout << vet[cont] << " ";
                val = false;
            }
        }else{
            if(cod == 2){
                for(cont = 19; cont >= 0; cont--){
                cout << vet[cont] << " ";
                val = false;
            }
            }else{
                system("clear");
                cout << "\tcodigo invalido, tente novamente\n";
                val = true;
            }
        }
    }while(val);
}