#include<iostream>
using namespace std;

int main(){
    int codigo1, codigo2, quantidade1, quantidade2;
    float valorFinal;
    cout << "\tBem vindo, escolha um lanche e uma bebida\n\tescolha seu lanche\n\t100 - Cachorro quente 1,10$\n\t101 - Baurú simples 1,30$\n\t102 - Baurú com ovo 1,50$\n\t103 - Hamburger 1,10$\n\t104 - Cheesburger 1,30$\n\tdigite o codigo do seu lanche: ";
    cin >> codigo1;
    cout << "\tquantos você ira querer?: ";
    cin >> quantidade1;
    cout << "\tescolha sua bebida\n\t105 - Refrigerante 1,00$\n\t106 - Suco 2,00$\n\t107 - Nescau 1,50$";
    cin >> codigo2;
    cin >> quantidade2;
    
    if(codigo1 == 100){
        valorFinal = 1.10 * quantidade1;
    }
    if(codigo1 == 101){
        valorFinal = 1.30 * quantidade1;
    }
    if(codigo1 == 102){
        valorFinal = 1.50 * quantidade1;
    }
    if(codigo1 == 103){
        valorFinal = 1.10 * quantidade1;
    }
    if(codigo1 == 104){
        valorFinal = 1.30 * quantidade1;
    }
    if (codigo2 == 105){
        valorFinal = valorFinal + 1 * quantidade2;
    }
    if (codigo2 == 106){
        valorFinal = valorFinal + 2 * quantidade2;
    }
    if (codigo2 == 107){
        valorFinal = valorFinal + 1.50 * quantidade2;
    }
    cout << valorFinal;
}