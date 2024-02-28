//C02EX05
#include<iostream>
using namespace std;
int main (void)
{

    char nome[50];
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    cin.getline(nome, 50);
    cout << "Olá. \nQual sua graça ?";


    cout <<"Tecle <enter> para encerrar..."<<endl;
    cin.get();
    return 0;
}
