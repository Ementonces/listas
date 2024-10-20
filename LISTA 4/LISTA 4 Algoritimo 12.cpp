/*Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não permitindo que sejam digitados
números negativos. Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor. Se
existir, informe o seu índice. Se não existir, informe a mensagem “Número não localizado!”.*/
#include<iostream>
using namespace std;

int main(){
    int V[10], i = 0, inte, posicao = -6985;
    do{
        cout << "\tInsira o " << i+1 << "º elemento (não pode ser negativo): ";
        cin >> V[i];
        if(V[i] < 0){
            cout << "\tO elemento inserido é negativo. tente novamente\n";
        }else i++;
    }while(i < 10);
    cout << "\tInsira um numero inteiro: ";
    cin >> inte;
    for(i = 0; i < 10; i++){
        if(inte == V[i]){
            posicao = i;
            i = 10;
        }
    }
    if(posicao == -6985){
        cout << "\tNúmero não localizado!";
    }else{
        cout << "\tO indice do elemento é " << posicao;
    }
    
}