/*Elabore um algoritmo que:
Solicite um número inteiro N ao usuário.
Declare um vetor V com N elementos inteiros.
Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro
do anterior.
Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor
elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário.
Mostre o vetor antes e depois da mudança.*/
#include <iostream>
using namespace std;

int main(){
    int N, X, aux = 0;
    cout << "\tInsira o tamanho do seu vetor: ";
    cin >> N;
    int V[N];
    for(int i = 0; i < N; i++){
        if(i == 0){
            V[i] = N;
        }else{
            V[i] = 2*V[i-1];
        }
    }
    cout << "\t";
    for(int i = 0; i < N; i++){
        cout << V[i] << " ";
    }
    cout << "\tInsira um numero inteiro para ser trocado no vetor: ";
    cin >> X;
    for(int i = 0; i < N; i++){
        if(V[i] == X){
            aux = V[0];
            V[0] = V[i];
            V[i] = aux;
            i = N+1;
        }else{
            if(i == N-1 && aux == 0){
                cout << "\tNumero não encontrado no vetor";
            }
        }
    }
     cout << "\t";
    for(int i = 0; i < N; i++){
        cout << V[i] << " ";
    }
}