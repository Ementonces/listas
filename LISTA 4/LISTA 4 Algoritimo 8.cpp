/*Elabore um algoritmo que leia dois vetores, A (10 elementos inteiros) e B (12 elementos inteiros), e escreva
todos os elementos comuns aos dois vetores.*/
#include<iostream>
using namespace std;

int main(){
    int a[10], b[12], i, mem;
    for( i = 0; i < 10; i++){
        cout << "\tInsira o " << i+1 << "º numero: ";
        cin >> a[i];
    }
    for( i = 0; i < 12; i++){
        cout << "\tInsira o " << i+1 << "º numero: ";
        cin >> b[i];
    }
    cout << "\tElementos semelheantes entre os dois vetores\n";
    for( i = 0; i < 10; i++){
        if(i != 0 && a[i] == a[i-1]){
            
        }else{
            for(int id = 0; id < 12; i++){
                if(a[i] == b[id]){
                    cout << "\t" << a[i] << endl;
                    id = 12;
                }
            }
        }
    }
}