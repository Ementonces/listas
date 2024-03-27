#include<iostream>
using namespace std;

int main(){
  int idade, anosT;
  cout << "\tinsira a sua idade: ";
  cin >> idade;
  cout << "\tinsira a quantos anos você trabalha: ";
  cin >> anosT;
  if(anosT > idade){
      cout << "\tvire gente Eugênio";
    }
else{
    if(idade >= 65){
      cout << "\tvocê pode solicitar a aposentadoria";
    }
    else{
        if(anosT >= 30){
        cout << "\tvocê pode solicitar a aposentadoria";
    }
         else{
                if(idade >= 60 && anosT >= 25){
                cout << "\tvocê pode solicitar a aposentadoria";
                }
                else{
                    cout << "\tvoc~e não pode solicitar a aposentadoria";
                }
            }
        }
    }
}
