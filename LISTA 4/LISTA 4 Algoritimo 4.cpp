/*Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos
elementos. */
#include<iostream>
using namespace std;

int main(){
    int a[20], dif, i, cont, difT, ind[2];
    for(i = 0; i < 20; i++){
        cout << "insira o" << i+1 " numero " << endl;
        cin >> a[i];
    }
    for(cont = 0; cont = 18; cont++){
        for(i = a[i]; i < a[i+1]; i++){
            if(cont = 0){
                dif++;
                
            }else{
                dift++;
                if(difT > dif){
                    dif = difT;
                }
            }
        }
    }
    cout << "\ta maior diferença"

}