#include <iostream>
using namespace std;

int main(){ 
int lado1, lado2, lado3;

cout << "\tdigite o comprimento dos tres lados de um triangulo\n";
cout << "\tlado 1: ";
cin >> lado1;
cout << "\tlado 2: ";
cin >> lado2;
cout << "\tlado 3: ";
cin >> lado3;
cout << "\teste é um triangulo ";

if (lado1 + lado2 >= lado3 && lado1 + lado3 >= lado2 && lado2 + lado3 >= lado1){
if ( !(lado1 == lado2 || lado3 == lado2 || lado1 == lado3)){
cout << "escaleno";
}

  else{
      if (lado2 == lado3 && lado3 == lado1){
cout << "equilatero";
}
   else{ cout << "isoceles";
}
}
}
else{
    cout << "isso não é um triangulo";
}
return 0;
}
