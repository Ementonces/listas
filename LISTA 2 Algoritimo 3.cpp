#include <iostream>
using namespace std;

int main(){ 
char sexo;
float altura;
cout << "\tqual seu sexo?\n masculino: m\n feminino: f\n"
cin >> sexo;
cin >> altura;
if(sexo == m){
    cout << (72.7 * altura) - 58;
}
else{
    if(sexo == f){
        cout << (62.1 * altura) - 44.7;
    }
    else{
        cout << "sexo invalido";
    }
}
}