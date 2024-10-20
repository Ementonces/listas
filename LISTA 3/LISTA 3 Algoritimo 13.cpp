/*Elabore um algoritmo que leia um número inteiro qualquer e verifique se ele é quadrangular. Se for,
mostrar os próximos 10 quadrangulares depois dele. Se não for, informar. OBS: Os números
quadrangulares são 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ...*/
#include <iostream>
using namespace std;

int main(){
    int numero, raiz, raizA;
    bool flag = true;
    cout << "\tDijite um numero inteiro: ";
    cin >> numero;
    for(raiz = 1; raiz <= numero && flag; raiz++){
        if(raiz * raiz == numero){
            flag = false;
        }
    }
    raizA = raiz;
    if(!flag){
        cout << "\tEsse numero é quadrangular\n";
        cout << "\tOs proximos 10 numeros quadrangulares são ";
        for(raiz; raiz < raizA + 10; raiz++){
            cout << raiz * raiz << " ";
        }
    }else{
        cout << "\tEsse numero não é quadrangular";
    }
}