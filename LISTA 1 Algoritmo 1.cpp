#include<iostream>
using namespace std;

int main(){
    int anos; int meses; int dias; int TotalDias;
    cout << "\tQuatos anos você tem?\n";
    cin >> anos;
    cout << "\tQuatos meses?\n";
    cin >> meses;
    cout << "\tE quantos dias?\n";
    cin >> dias;
    
    TotalDias = anos * 365 + meses * 30 + dias;
    cout << "\tvocê tem " << TotalDias << " dias";
    
    
}