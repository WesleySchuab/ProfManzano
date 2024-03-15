#include <iostream>

using namespace std;

int main(void)
{
  int z = 3;
  cout << "Programa Verificação de processamento " << endl << endl;
  z = z++ + ++z;
  cout << "z = z++ resultado: valor de Z " << z << endl;

  cout << "Valor de Z " << z << endl;
}

