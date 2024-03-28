#include<iostream>
using namespace std;

int main(){
    int idade;
    cout << "\tdigite a sua idade: ";
    cin >> idade;
    if(idade <0){
        cout << "\ttome vergonha na cara Eugênio";
    }
    else{
        if(idade >= 18){
            cout << "\tvocê já tem idade para tirar carteira de habilitação";
        }
        else{
        cout << "\tainda faltam " << 18 - idade << " anos para você poder tirar carteira de habilitação";
        }
    }
}