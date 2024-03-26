#include<iostream>
using namespace std;

int main(){
    int nota1, nota2, nota3;
    float media;
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 8;
    if(nota1 > 10 || nota2 > 10 || nota3 > 10){
        cout << "\nLADRÃO";
    }
    
    else{
    if(media >= 0 && media <= 2.9){
        cout << "REPROVADO!";
    }
    if(media >= 3 && media <= 4.9){
        cout << "vai pra recuperação";
    }
    if(media >= 5){
        cout << "passou direto";
    }
    }
}