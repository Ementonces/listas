/*Uma loja tem, para cada um dos seus 10 funcionários, uma ficha contendo a identidade, o número de
horas trabalhadas e a quantidade de dependentes do mesmo. Considerando que: a) A empresa paga 12
reais por hora e 40 reais por dependentes (salário bruto).
b) Sobre o salário bruto são feitos descontos de 8,5% para o INSS e 5% para o IR (salário líquido). Elabore
um algoritmo que leia os dados de todos os funcionários, calcule e escreva os salários bruto (total) e
líquido (total – descontos) de cada funcionário e a identidade de todos os funcionários com mais de 3
dependentes*/
#include <iostream>
using namespace std;

int main(){
    int identidade, horas, dependentes, cont;
    bool flag = true;
    string maisd3;
    for(cont = 10; cont > 0; cont--){
        cout << "\tDijite sua identidade: ";
        cin >> identidade;
        cout << "\tDijite a quantidade de horas trabalhadas: ";
        cin >> horas;
        cout << "\tDijite a quatide de dependentes: ";
        cin >> dependentes;
        cout << "\tSeu salario bruto é: " << (12 * horas) + (40 * dependentes) << " e seu salario liquido é: " << ((12 * horas) + (40 * dependentes)) * 0.865 << endl;
        if(dependentes > 3){
            if(flag){
                maisd3 += to_string(identidade);
                flag = false;
            }
            else{
                maisd3 += + " " + to_string(identidade);
            }
        }
    }
    cout << "a identidade dos fucionarios com mais de 3 dependentes: " << maisd3;
}