// Programa Calculadora

#include <iostream>

using namespace std;
int op;

void soma(int &resultado)
{
  int valor1, valor2;
  if (op == 1){
    cout<<"Insira o valor 1: ";
    cin>>valor1;
    cin.ignore(80,'\n');
    cout<<"Insira o valor 2: ";
    cin>>valor2;
    cin.ignore(80,'\n');
    resultado = valor1 + valor2;
  }
  
}
int main(void)
{
  cout<<"Menu daPrograma Calculadora"<<endl;
  cout<<"Digite 1 para fazer uma soma"<<endl;
  cin>>op;
  soma(op);
  cout<<"Resutado: "<<op<<endl;
  
  return 0;
}