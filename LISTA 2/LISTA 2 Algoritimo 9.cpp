#include<iostream>
using namespace std;

int main(){
int a, b, c;
char letra;
cout << "\tdigite tres numeros\n";
cout << "\t";
cin >> a;
cout << "\t";
cin >> b;
cout << "\t";
cin >> c;
cout << "\tvocê os quer em ordem creceste ou decrescente\n\tcrescente - c\n\tdecrescente - d\n\t";
cin >> letra;
cout << "\tos numeros do ";
if(letra == 'd'){
    if(a > b && a > c){
        cout << "maior para o menor são\n";
        cout << a << " ";
        if(b > c){
            cout << b << " " << c;
        }
        else{
            cout << c << " " << b;
        }
    }
    if(b > a && b > c){
        cout << b << " ";
        if(a > c){
            cout << a << " " << c;
        }
        else{
            cout << c << " " << a;
        }
    }
    if(c > a && c > b){
        cout << c << " ";
        if(a > b){
            cout << a << " " << b;
        }
        else{
            cout << b << " " << a;
        }
    }
}
if(letra == 'c'){
    cout << "menot para o maior são\n";
    if(a < b && a < c){
        cout << a << " ";
        if(b < c){
            cout << b << " " << c;
        }
        else{
            cout << c << " " << b;
        }
    }
    if(b < c && b < a){
        cout << b << " ";
        if(c < a){
            cout << c << " " << a;
        }
        else{
            cout << a << " " << c;
        }
    }
    if(c < a && c < b){
        cout << c << " ";
        if(a < b){
            cout << a << " " << b;
        }
        else{
            cout << b << " " << a;
        }
    }
}
}