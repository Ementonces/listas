/*Sejam A e B dois vetores contendo 10 elementos inteiros. Elabore um algoritmo que:
a. Leia A e B.
b. Calcule a soma dos elementos de A.
c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e B.*/
#include<iostream>
using namespace std;

int main(){
    int a[10], b[10], c[10], i;
    for(i = 0; i < 10; i++){
        cout << "insira dois numeros inteiros: ";
        cin >> a[i] >> b[i];
    }
    for(i = 0; i < 10; i++){
        c[i] = a[i] + b[i];
    }
    cout << "\tVetores\n\tA\tB\tC\n";
    for(i = 0; i < 10; i++){
        cout << "\t" << a[i] << "\t+\t" << b[i] << "\t=\t" << c[i] << endl;
    }
}