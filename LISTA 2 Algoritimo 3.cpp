#include <iostream>
using namespace std;

int main(){ 
char sexo;
float altura;
cout << "\tqual seu sexo?\n\t masculino: m\n\t feminino: f\n\t :";
cin >> sexo;
cout << "\tqual a sua altura?: ";
cin >> altura;
if(sexo == 'm'){
    cout << "\to seu peso ideal seria " << (72.7 * altura) - 58 << "Kg"; 
}
else{
    if(sexo == 'f'){
        cout << "\to seu peso ideal seria "  << (62.1 * altura) - 44.7 << "Kg";
    }
    else{
        cout << "\tsexo invalido";
    }
}
}