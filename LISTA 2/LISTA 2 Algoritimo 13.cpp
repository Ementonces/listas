#include<iostream>
using namespace std;

int main(){
    int km, litros;
    float kmPlitro;
    cout << "insira quantos Km você rodou: ";
    cin >> km;
    cout << "insira quantos litros voce abasteceu: ";
    cin >> litros;
    kmPlitro = km / litros;
    if(km <= 0 || litros <= 0){
        cout << "tome vergonha na cara Eugênio";
    }
    else{
        if(kmPlitro < 8){
            cout << "Venda o carro!";
        }
        else{
            if(kmPlitro >= 8 && kmPlitro < 12){
                cout << "Econômico!";
            }
            else{
                if(kmPlitro >= 12){
                    cout << "Super econômico!";
                }
                else{
                
                }
            }
        }
    }
}