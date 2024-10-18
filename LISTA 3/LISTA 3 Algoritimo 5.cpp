/*Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma,
até que seja digitada uma média negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar
as matrículas de todos os alunos que obtiveram médias superiores a 9. */

#include <iostream>
using namespace std;

int main()
{
    int matricula, reprovados, aprovados, rec, NoveMais;
    float media;
    
    do{
        cout << "\tDijite sua matricula: ";
        cin >> matricula;
        cout << "\tDijite sua media";
        cin >> media;
        if(media >= 0){
            if(media < 3){
                reprovados++;
            }else{
                if(media < 7){
                    rec++;
                }else{
                    if(media <= 10){
                    aprovados++;
                        if(media > 9)
                        NoveMais++;
                    }
                }
            }
        }
    }while(media >= 0);
    cout << "\tO total de alunos que foram aprovados foi " << aprovados << "\n\tO total de reprovados foi " << reprovados << "\n\tO total de alunos em recuperação foi " << rec << "\n\tE a(s) matricula(s) do(s) aluno(s) com media acima de 9 ";
}
