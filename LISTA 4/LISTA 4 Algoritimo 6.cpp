/*Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar o primeiro elemento com o
último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Ao final,
escreva o vetor A modificado.*/
#include<iostream>
using namespace std;

int main(){
    int a[20], troca;
    for(int i = 0; i < 20; i++){
        cout << "\tInsira um numero inteiro no indice " << i << ": ";
        cin >> a[i];
    }
    for(int i = 0; i < 10; i++){
        troca = a[i];
        a[i] = a[19-i];
        a[19-i] = troca; 
    }
    cout << "\tVetor A\n";
    for(int i = 0; i < 20; i++){
        cout << "\t" << a[i] << endl;
    }

}