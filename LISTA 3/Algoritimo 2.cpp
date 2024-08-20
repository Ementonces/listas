/*Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos N
motoristas:
- O número da carteira de motorista (inteiro);
- Número de multas;
- O valor de cada uma das multas.
Deve ser impresso o valor da dívida de cada motorista 
e ao final da leiturao total de recursos arrecadados
(somatório de todas as multas).
O algoritmo deverá imprimir também o número da carteira do motorista
que obteve o maior número de multas. */

#include <iostream>
using namespace std;

int main()
{
    int motoristas, carteira, MaiorCarteira, multas, MaiorMulta = 0;
    float valor, ValorTotal, ValorLocal;
    cout << "Insira quantos motoristas serão analizados: ";
    cin  >> motoristas;
    for(motoristas; motoristas > 0; motoristas--){
        cout << "Insira o número da carteira do motorista: ";
        cin >> carteira;
        cout << "Insira o número de multas do motorista: ";
        cin >> multas;
        for(multas; multas > 0; multas--){
           cout << "insira o valor da multa: ";
           cin >> valor;
           ValorLocal += valor;
           cout << "esse motorista tem o valor de R$ " << ValorLocal << " Em multas\n";
        }
        if(multas >= MaiorMulta){
            MaiorCarteira = carteira;
        }
        ValorTotal += ValorLocal;
        ValorLocal = 0;
    }
    cout << "O valor total das multa foram R$" << ValorTotal;
    cout << "O numero da carteira do motorista que obteve o maior número de multas é: " << MaiorCarteira;
}
