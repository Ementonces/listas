#include <iostream>
using namespace std;

int main()
{
    int dia;
    cout << "\tdigite um dia da semana.\n\t1 - domingo\n\t2 - segunda\n\t3 - terça\n\t4 - quarta\n\t5 - quinta\n\t6 - sexta\n\t7 - sabado\n\t";
    cin >> dia;
    if(dia <= 0 || dia >= 8){
        cout << "\tdia invalido";
    }
    if(dia == 1 && dia == 7){
        cout << "\tesse dia é um final de semana.";
    }
    if(dia >= 2 && dia <= 6){
        cout << "\tesse dia é um dia util.";
    }
}