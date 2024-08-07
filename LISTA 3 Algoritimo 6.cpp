/*Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas.
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a
tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro
do algoritmo e não estará visível para o usuário*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int randon, guess;
    srand(time(NULL));
    randon = rand() % 11;
    cout << randon;
    for(int tent = 0; tent < 3 || guess != randon; tent++){
        cout << "Tente adivinhar o numero (1 a 10): ";
        cin >> guess;
        if(guess < randon){
            cout << "\to numero é maior que esse\n";
        }else{
            if(guess > randon){
                cout << "\to numero é menor que esse\n";
            }else{
                cout << "\tparábens você acertou\n";
            }
        }
        
    }
    if(guess != randon){
        cout << "\tvocê perdeu";
    }
}
