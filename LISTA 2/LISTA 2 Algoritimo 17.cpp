#include<iostream>
using namespace std;

int main(){
    int numero;
    cout << "\tinsira um numero qualquer: ";
    cin >> numero;
    if(numero % 2 == 0){
        if(numero % 10 == 0){
        cout << "\tesse numero é multiplo de 10";
        }
        else{
            cout << "\tesse numero não é multiplo de 10";
        }
    }
    else{
        if(numero % 5 == 0){
            cout << "\tesse numero é divisivel por 5";
        }
        else{
            cout << "\tesse numero não é divisivel por 5";
        }
    }
}