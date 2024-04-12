#include <iostream>
using namespace std;

int main()
{
int cod, codV, id, idV = 0, idN = 100, rep = 0;
/*cod = codigo, codV codigo do mais velho,id = idVde, 
idN = idVde do mais novo e rep = repetição.*/
for(rep = 0; rep != 100; rep++){
    cout << "\tinsira seu codigo: ";
    cin >> cod;
    cout << "\tinsira sua idade: ";
    cin >> id;
    if(rep == 0){
        idV = id;
        idN = id;
        codV = cod;
    }else{
        if(id >= idV){
        idV = id;
        codV = cod;
        }else{
            if (id <= idN){
            idN = id;
            }
    }
    }
    system("clear");
}
cout << "\tA idade da pessoa mais nova é " << idN << "\n\te o codigo da pessoa mais velha é " << codV;
}
