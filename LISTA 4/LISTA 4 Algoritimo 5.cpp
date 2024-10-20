/*Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo
vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e
assim sucessivamente. Ao final, escreva os vetores A e B.*/
#include <iostream>
using namespace std;

int main(){
    int a[20], b[20];
    for(int i = 0; i < 20; i++){
        cout << "\tInsira um numero inteiro no indice " << i << ": ";
        cin >> a[i];
        system("clear");
    }
    for(int i = 0; i < 20; i++){
        b[19-i] = a[i];
    }
    cout << "\tVetores\n\tA\tB\n";
    for(int i = 0; i < 20; i++){
        cout << "\t" << a[i] << "\t" << b[i] << endl;
    }
}