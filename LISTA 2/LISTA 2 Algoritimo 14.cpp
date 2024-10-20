#include<iostream>
using namespace std;

int main(){
int num1, num2, num3;
cout << "digite tres numeros inteiros: ";
cin >> num1 >> num2 >> num3;
if(num1 == num2 && num3 == num2){
    cout << "Todos os números são iguais";
}
else{
    if(num1 == num2 || num2 == num3 || num3 == num1){
        cout << "Apenas dois números são iguais";
    }
    else{
        cout << "Todos os números são diferentes";
    }
}
}
