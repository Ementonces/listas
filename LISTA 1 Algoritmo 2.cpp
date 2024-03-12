#include<iostream>
using namespace std;

int main(){
    int AnosFumando, CigarrosPorDia;
    float GastoTotal, preço;
    cout << "\tA quantos anos você fuma?\n";
    cin >> AnosFumando;
    cout << "\tquantos cigarros você fuma por dia?\n";
    cin >> CigarrosPorDia;
    cout << "\tqual o preço da carteira que você compra?\n";
    cin >> preço;
    GastoTotal = AnosFumando * 365 * CigarrosPorDia * (preço / 20);
    cout << "\t" << GastoTotal << " reais seus viraram fumaça";
}
