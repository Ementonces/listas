#include <iostream>
using namespace std;
int
main ()
{
  int val1, val2, troca;
  cin >> val1;
  cin >> val2;
  troca = val1;
  val1 = val2;
  val2 = troca;
  cout << val1 << " " << val2;
}
