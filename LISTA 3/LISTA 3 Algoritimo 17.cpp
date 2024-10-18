/*Elabore um algoritmo que simule o caixa de um supermercado. Para cada produto da compra, o
algoritmo deve ler o seu código, o valor unitário e a quantidade adquirida. Após as informações do 
produto, o algoritmo deve mostrar o subtotal da compra e perguntar se o usuário deseja continuar (Ssim, N-não). Caso o usuário escolha ‘S’, o algoritmo deverá pedir os dados do próximo produto. Caso
escolha ‘N’, o algoritmo deverá informar o total da compra e a quantidade total de produtos adquiridos.
Em seguida deve ler o valor pago e informar se está correto, existe troco ou está insuficiente.*/
#include <iostream>
using namespace std;

int main(){
    int codigo, qntd;
    float valor, total = 0, recebido;
    char soun;
    do{
        cout << "\tDijite o codigo do produto: ";
        cin >> codigo;
        cout << "\tDijite o valor unitario do produto: ";
        cin >> valor;
        cout << "\tDijite a quantidade de produtos comprados: ";
        cin >> qntd;
        total += valor * qntd;
        while(soun !='S' || soun != 's' || soun != 'N' || soun != 'n'){
            cout << "\tDeseja continuar? (S - Sim, N - Não): ";
            cin >> soun;
            if(soun != 'S' || soun != 's' || soun != 'N' || soun != 'n'){
                cout << "\tOpção invalida, Dijite novamente\n";
            }
        }
    }while(soun == 'S' || soun == 's');
    if(total == 0){
        cout << "\tFim de programa";
    }else{
        cout << "\tO valor total da compra foram R$" << total;
        cout << "\n\tInsira quanto foi recebido pela compra: ";
        cin >> recebido;
        if(recebido == total){
            cout << "\tO valor recebido esta correto.";
        }else{
            if(recebido < total){
                cout << "\tValor insuficiente, faltam R$" << total - recebido;
            }
        }
    }

}