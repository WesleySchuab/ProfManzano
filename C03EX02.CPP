//C03EX02.CPP

#include<iostream>
using namespace std;
int main(void){
    int a, b;

    cout << "Entre o valor <A>: "; cin >> a;
    cin.ignore(90,'\n');

    cout << "Entre o valor <B>: "; cin >> b;
    cin.ignore(90,'\n');

    cout << "\n";



    if(int r = a + b; r > 10)
        cout << "Resultado = " << r << endl << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
