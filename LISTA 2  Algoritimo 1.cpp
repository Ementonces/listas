#include <iostream>
using namespace std;

int main(){ 
int x, y, z;
cin >> x;
cin >> y;
cin >> z;

if (x + y > z || y + z > x || x + z > y){
if ( !(x == y || z == y || x == z)){
cout << "escaleno";
}

  else{
      if (y == z && z == x){
cout << "equilatero";
}
   else{ cout << "isoceles";
}
}
}
else{
    cout << "isso não é um triangulo";
}
}


 
 
 
 
 
 
 
 
