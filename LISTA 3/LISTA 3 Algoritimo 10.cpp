/*Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá espacoser cada
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número
negativo, solicitar que o usuário digite novamente até que o número seja positivo.*/
#include <iostream>
using namespace std;

int main(){
    long int valor1, valor2, valor3, valor4;
    int espacos;
    bool flag = true;
    string valores;
    while(flag){
        do{
            cout << "\tdijite o primeiro valor: ";
            cin >> valor1;
            if(valor1 < 0){
                cout << "\n\tvalor negativo, por favor dijite novamente\n";
            }
        }while(valor1 < 0);
            
        do{
            cout << "\tdijite o segundo valor: ";
            cin >> valor2;
            if(valor2 < 0){
                cout << "\n\tvalor negativo, por favor dijite novamente\n";
            }
        }while(valor2 < 0);

        do{
            cout << "\tdijite o terceiro valor: ";
            cin >> valor3;
            if(valor3 < 0){
                cout << "\n\tvalor negativo, por favor dijite novamente\n";
            }
        }while(valor3 < 0);
        
        do{
            cout << "\tdijite o quarto valor: ";
            cin >> valor4;
            if(valor4 < 0){
                cout << "\n\tvalor negativo, por favor dijite novamente\n";
            }
        }while(valor4 < 0);
        if((valor1 == 0 && valor2 == 0 && valor3 == 0 && valor4 == 0)){
            flag = false;
        }else{
            cout << "\t\t ------------------------------------------------\n";
            cout << "\t\t |valores\t|quadrados\t|cubos\t\t|\n";

            cout << "\t1\t |" << valor1;
            valores = to_string(valor1);
            for(espacos = 14 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
                
            cout << "|" << valor1*valor1;
            valores = to_string(valor1*valor1);
            for(espacos = 15 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
            cout << "|" << valor1*valor1*valor1;
            valores = to_string(valor1*valor1*valor1);
            for(espacos = 15 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
            cout << "|\n";
            cout << "\t2\t |" << valor2;
            valores = to_string(valor2);
            for(espacos = 14 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
                
            cout << "|" << valor2*valor2;
            valores = to_string(valor2*valor2);
            for(espacos = 15 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
            cout << "|" << valor2*valor2*valor2;
            valores = to_string(valor2*valor2*valor2);
            for(espacos = 15 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
            cout << "|\n";
            cout << "\t3\t |" << valor3;
            valores = to_string(valor3);
            for(espacos = 14 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
                
            cout << "|" << valor3*valor3;
            valores = to_string(valor3*valor3);
            for(espacos = 15 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
            cout << "|" << valor3*valor3*valor3;
            valores = to_string(valor3*valor3*valor3);
            for(espacos = 15 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
            cout << "|\n";
            cout << "\t4\t |" << valor4;
            valores = to_string(valor4);
            for(espacos = 14 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
                
            cout << "|" << valor4*valor4;
            valores = to_string(valor4*valor4);
            for(espacos = 15 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
            cout << "|" << valor4*valor4*valor4;
            valores = to_string(valor4*valor4*valor4);
            for(espacos = 15 - size(valores); espacos > 0; espacos--){
                cout << " ";
            }
            cout << "|\n";
             cout << "\t\t ------------------------------------------------\n";

        }
    }

}