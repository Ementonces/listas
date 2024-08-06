#include <iostream>
using namespace std;
int
main ()
{
int a, b;
bool c, d;
cout << "insira dois valores inteiros: ";
cin >> a >> b;
cout << "insira dois valores booleanos (1 - verdadeiro / 0 - falso): ";
cin >> c >> d;
cout << "\n\tVALORES INTEIROS\n\tO valor da soma é: " << a + b ;
cout << "\n\tO valor da subtração é: " << a - b ;
cout << "\n\tO valor da multiplicação é: " << a * b ;
cout << "\n\tO valor da divisão é: " << ((float)a / b);
cout << "\n\tVALORES BOOLEANOS\n\tO valor da negação dos valores são: " << !c << " é " << !d;
cout << "\n\tO valor da conjunção dos volares é: " << (c&&d);
cout << "\n\tO valor da disjunção é: " << (c||d);
}
