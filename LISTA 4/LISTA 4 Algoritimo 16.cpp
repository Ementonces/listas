/*Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matrículas dos
alunos e N suas respectivas notas (o tamanho deve ser digitado pelo usuário). Calcule a média de todas as
notas de N. Escreva primeiramente o conjunto das notas maiores do que a média calculada. Em seguida,
escreva as matrículas dos alunos cujas notas foram menores do que a média.*/
#include <iostream>
using namespace std;

int main(){
    int t;
    cout << "\tInsira quantos alunos: ";
    cin >> t;
    int M[t];
    float N[t], media = 0;
    for(int i = 0; i < t; i++){
        cout << "\tinsira a matricula do aluno: ";
        cin >> M[i];
        cout << "\tinsira a nota do aluno: ";
        cin >> N[i];
    }
    for(int i = 0; i < t; i++){
        media += N[i];
    }
    media = media / t;
    cout << "\tMatriculas dos alunos com nota maior que a media:\n";
    for(int i = 0; i < t; i++){
        if(N[i] > media){
            cout << "\t" << M[i] << endl;
        }
    }
    cout << "\tMatriculas dos alunos com nota menor que a media:\n";
    for(int i = 0; i < t; i++){
        if(N[i] < media){
            cout << "\t" << M[i] << endl;
        }
    }
}