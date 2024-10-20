/*Elabore um algoritmo que apresente um menu contendo as opções 1-Triângulo, 2-Quadrado,
3Retângulo, 4-Trapézio, 5-Círculo, 6-Sair. Em seguida, de acordo com a opção escolhida pelo usuário, o
algoritmo deve solicitar as informações necessárias para cálculo da área, efetuar o cálculo e escrever o
resultado. O algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair*/
#include <iostream>
using namespace std;

int main(){
    int escolha;
    bool flag = true;

    while(flag){
        cout << "\tSelecione uma opção\n\t1 - triangulo\n\t2 - quadrado\n\t3 - retangulo\n\t4 - trapezio\n\t5 - circulo\n\t6 - sair\n";
        cin >> escolha;
        switch(escolha){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6: cout << "\tfim de progama";
                flag = false;
                break;
            default:
        }
    }
}