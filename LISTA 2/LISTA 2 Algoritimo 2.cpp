#include <iostream>
using namespace std;

int main(){ 
int numero;
cin >> numero;
if(numero%2 == 0){
    if(numero >= 100){
        cout << "esse numero é maior que 100";
    }
    else{
        cout << "esse numero é menor que 100";
    }
}
else{
    if(numero < 0){
        cout << "esse numero é negativo";
    }
    else{
        cout << "esse numero é positivo";
    }
}
}