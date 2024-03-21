#include<iostream>
using namespace std;

int main(){
    int nivel, hora;
    cout << "\tvocê é um professor nivel: ";
    cin >> nivel;
    cout << "\tquantas horas de aula vocé deu?: ";
    cin >> hora;
    if(nivel == 1){
        cout << "você recebera " << hora * 12 << "$";
    }
    if(nivel == 2){
        cout << "você recebera " << hora * 17 << "$";
    }
    if(nivel == 3){
        cout << "você recebera " << hora * 21 << "$";
    }
    if( !(nivel == 1 || nivel == 2 || nivel == 3)){
        cout << "nivel invalido";
    }
}