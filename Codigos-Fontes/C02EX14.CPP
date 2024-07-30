//C02EX14.CPP
#include <iostream>
using namespace std;
int main (void){
    int x, y;
    x=10; y = ++x;
    cout << "\nX = " << x << "| Y = " << y << endl;
// Nesse ponto a impressão que passa é que a var  y irá receber  o valor 11 porem ele recebe o valor de x antes de ser incrementado 
// A o executar o programa verificamos que o y permanece com 10 e o x com 11
    x = 10; y=x++;
    cout << "\nX = " << x << "| Y = " << y << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar";
    cin.get();
    return 0;
}
