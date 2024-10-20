/*Elabore um algoritmo que mostre o calendário de um determinado mês. Os dados de entrada são o mês
(cujos dados devem ser mostrados) e o dia da semana em que esse mês inicia. Assuma que esse mês está
em um ano que não é bissexto, porém considere meses de 28, 30 e 31. O resultado deve ser como
mostrado abaixo. Ex: janeiro, começando na 5a feira:*/

#include <iostream>
using namespace std;

int main(){
    int mes, primeiroD, diasDmes, cont;

    do{
        cout << "\tDijite qual més você quer o calendario: ";
        cin >> mes;
        cout << "\tQual dia o mès o calendario vai começar?";
        cout << "\n\t(1-dom, 2-seg, ..., 7-sab): ";
        cin >> primeiroD;

        switch(mes){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:diasDmes = 31;
                break;
            case 2: diasDmes = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11: diasDmes = 30;
                break;
            default: cout << "\tVocẽ dijitou o mes errado, por favor tente novamente\n";
                diasDmes = 0;
        }
    }while(diasDmes == 0);

    cout << "\tDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\t";

        for(cont = 1; cont < primeiroD; cont++){
            cout << "\t";
        }

    for(cont = 1; cont <= diasDmes; cont++){
        cout << cont << "\t";
        if(primeiroD > 7){
            cout << "\n\t";
            primeiroD = 2;
        }else{
            primeiroD++;
        }

    }
}