#include<iostream>
using namespace std;

int main(){
    int codigo, salario, salarioNovo;
    cout << "\tdigite o valor do seu salario: ";
    cin >> salario;
    cout << "\tdigite o seu codigo de cargo: ";
    cin >> codigo;
    if(codigo == 101){
        salarioNovo = salario + (salario/100) * 10;
        cout << "\tseu salario anterior: " << salario << "\n\tseu salario atual: " << salarioNovo << "\n\tvalor do aumento: " << (salario/100) * 10;
    }
    if(codigo == 102){
        salarioNovo = salario + (salario/100) * 20;
        cout << "\tseu salario anterior: " << salario << "\n\tseu salario atual: " << salarioNovo << "\n\tvalor do aumento: " << (salario/100) * 20;
    }
    if(codigo == 103){
        salarioNovo = salario + (salario/100) * 30;
        cout << "\tseu salario anterior: " << salario << "\n\tseu salario atual: " << salarioNovo << "\n\tvalor do aumento: " << (salario/100) * 30;
    }
   if( !(codigo == 101 || codigo == 102 || codigo == 103)){
        salarioNovo = salario + (salario/100) * 40;
        cout << "\tseu salario anterior: " << salario << "\n\tseu salario atual: " << salarioNovo << "\n\tvalor do aumento: " << (salario/100) * 40;
    }
}