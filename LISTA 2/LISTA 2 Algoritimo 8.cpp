#include<iostream>
using namespace std;

int main(){
char letra;
int numero, valor;
cout << "digite um numero: ";
cin >> numero;
cout << "\n\tAntecessores - a\n\tSucessores - s\n";
cin >> letra;
if(letra == 'a'){
    cout << (numero - 1)+(numero - 2)+(numero - 3)+(numero - 4)+(numero - 5)+(numero - 6)+(numero - 7)+(numero - 8)+(numero - 9)+(numero - 10);
}
if (letra == 's'){
    cout << (numero + 1)+(numero + 2)+(numero + 3)+(numero + 4)+(numero + 5)+(numero + 6)+(numero + 7)+(numero + 8)+(numero + 9)+(numero + 10);
}
}