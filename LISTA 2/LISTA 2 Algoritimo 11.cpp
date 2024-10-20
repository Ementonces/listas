#include<iostream>
using namespace std;

int main(){
    int valorI, valor1, valor2, valor3, valor4, valor5;
    cout << "insira um valor inteiro (ate 5 dijitos): ";
    cin >> valorI;
    if(valorI >=100000){
        cout << "esse numero exede os 5 dijitos";
    }
    else{
        valor1 = valorI%10;
        valor2 = valorI%100 / 10;
        valor3 = valorI%1000 / 100;
        valor4 = valorI%10000 / 1000;
        valor5 = (valorI - valorI%10000) / 10000;
        cout << "soma de todos os algarismos do seu numero é " << valor1 + valor2 + valor3 + valor4 + valor5; 
    }
}
