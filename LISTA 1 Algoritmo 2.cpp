#include<iostream>
using namespace std;

int main(){
int AnosFumando; int preço; int CigarrosPorDia; int TotalGasto; int DiasFumando;
    cout << "\tA quantos anos você fuma?\n";
    cin >> AnosFumando;
    cout << "\tqual o preço medio do cigarro que você compra?\n";
    cin >> preço;
    cout << "\tquantos cigarros você fuma por dia?\n";
    cin >> CigarrosPorDia;
    
    DiasFumando = AnosFumando * 365;
    TotalGasto = preço * CigarrosPorDia * DiasFumando;
    cout <<"você ja gastou " << TotalGasto << " em cigarros";
}