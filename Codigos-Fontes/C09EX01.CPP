// C09EX01.CPP
//Bibliotecas para manipular arquivos
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{

//  arqtxt ofstream é o objeto.
// Paramentros para o construtor ("EXEMPLO1.TXT", ios::trunc);
// esse código pode ser entendido como arqtxt é atribuido a "EXEMPLO1.TXT"
// Esse parametro cria o arquivo :trunc e sobrescreve caso exista
  ofstream arqtxt("EXEMPLO1.TXT", ios::trunc);

  cout << "Arquivo criado com sucesso." << endl;
  arqtxt.close();

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}