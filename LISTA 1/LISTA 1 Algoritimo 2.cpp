#include<iostream>
using namespace std;

int main(){
    int AnosFumando, CigarrosPorDia;
    float GastoTotal, presso;
    cout << "\tA quantos anos você fuma?\n";
    cin >> AnosFumando;
    cout << "\tquantos cigarros você fuma por dia?\n";
    cin >> CigarrosPorDia;
    cout << "\tqual o preço da carteira que você compra?\n";
    cin >> presso;
    GastoTotal = AnosFumando * 365 * CigarrosPorDia * (presso / 20);
    cout << "\t" << GastoTotal << " reais seus viraram fumaça";
}
