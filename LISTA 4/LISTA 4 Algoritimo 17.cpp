/*Elabore um algoritmo que leia um vetor S contendo os salários dos funcionários de uma empresa com, no
máximo, 100 funcionários, sendo que para terminar a entrada será fornecido o valor -1. Após toda a entrada
ter sido realizada, leia o valor de um reajuste. Em seguida, gere e escreva um segundo vetor R contendo
todos os salários de S já reajustados.*/
#include <iostream>
using namespace std;

int main(){
    float S[100];
    int j, i;
    for(i = 0; S[i-1] != -1 && i < 100; i++){
        cout << "\tInsira o salario do funcionario: ";
        cin >> S[i];
    }
    if(S[i-1] == -1){
        i--;
    }
    float R[i];
    cout << "\tO salario de todos os funcionarios já foram cadastrados\n";
    for(j = 0; j < i; j++){
        cout << "\tReajuste o salario do " << j+1 << "º salario: ";
        cin >> R[j];
    }
    cout << "\tTodos os salarios foram reajustados\nsalario\t\toriginal\t\treajustado\n";
    for(j = 0; j < i; j++){
        cout << j << "º\t" << S[j] << "\t" << R[j] << endl;
    }
}
