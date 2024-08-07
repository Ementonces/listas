/*Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento em grãos de trigo da seguinte
maneira: os grãos de trigo seriam dispostos em um tabuleiro de xadrez, de tal forma que a primeira casa
do tabuleiro tivesse um grão, e as casas seguintes o dobro da anterior. Considere que o tabuleiro de
xadrez é 8x8 e que o número da casa varia de 1-8 para a primeira linha, de 9-16 para a segunda linha e
assim sucessivamente. Construa um algoritmo que calcule quantos grãos de trigo a Rainha deverá pagar
ao monge a partir da leitura do número da casa desejada.*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    float graos = 1, CF;
    do{
        cout << "Até que casa você irá pagar? ";
        cin >> CF;
    }while(CF >=64);

    for(int cont = 1; cont < CF; cont++){
        graos = graos * 2;
        
    }
   cout << "O monge vai receber " << graos<< " grãos";

}