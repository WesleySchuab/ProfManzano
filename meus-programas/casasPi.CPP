// Formatar a saida em c++
#include<iostream>
#include<iomanip>

using namespace std;

int main (void)
{
  double pi = 3.1415926535897932384626433832795028841971693993751058;
  cout << setprecision(2) <<pi << endl; 
  cout << setprecision(3) <<pi << endl;
  cout << setprecision(4) <<pi << endl;
  cout << setprecision(5) <<pi << endl;
  cout << setprecision(6) <<pi << endl;
  return 0;
}