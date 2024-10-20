/*Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, depois a
operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele digite
enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 +
4 = 6. O algoritmo deve resolver a expressão na ordem de digitação*/
#include <iostream>
using namespace std;

int main(){
    int numero1, numero2;
    bool flag;
    char operador;
    cout << "\tDijite o numero: ";
    cin >> numero1;
    cout << "\tDigite o operador (+, -, *, /) ou sinal de igualdade: ";
    cin >> operador;
    while(operador != '='){
        cout << "\tDijite o numero: ";
        cin >> numero2;
        switch (operador){
            case '+': numero1 += numero2;
                break;
            case '-': numero1 -= numero2;
                break;
            case '/': numero1 /= numero2;
                break;
            case '*': numero1 *= numero2;
                break;
            default:
                break;
        }
        cout << "\tDigite o operador (+, -, *, /): ";
        cin >> operador;
    }
    cout << "\tO resultado da operação é " << numero1;
}