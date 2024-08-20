#include <iostream>
using namespace std;
/*Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por
ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja
maior que Chico. */
int main(){
        float chico = 1.50, juca = 1.10;
        int anos;
    for(anos = 0; juca < chico; anos++){
        juca = juca + 0.03;
        chico = chico + 0.02;
    }
    cout << "Juca sera maior que chico em " << anos << " anos";
}

