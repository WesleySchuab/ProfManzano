//C02EX06
#include<iostream>
#include<cwchar>

using namespace std;

int main (void)
{
    int a, b, r;
    cout << "Informe um valor para variavel <A>: "; cin >> a;
    cin.ignore(80, '\n');

    cout << "Informe um valor para variavel <B>: "; cin >> b;
    cin.ignore(80, '\n');

    r = a + b;

    cout << "Resultado = " << r << endl;
    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;

}
