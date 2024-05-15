// C09EX02.CPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{

  string mensagem;
  // app = apend acrescenta algo sem apagar
  ofstream arqtxt("EXEMPLO1.TXT", ios::app);

  cout << "Informe uma mensagem" << endl;
  cout << "--> ";

  getline(cin, mensagem);

// caso aqui usassemos cout << mostraria a mensagem na tela 
  arqtxt << mensagem << endl;

  arqtxt.close();

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}