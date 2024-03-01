//C03EX01.CPP

#include<iostream>
using namespace std;
int main(void){
    int a, b,r;
    
    cout << "Entre o valor <A>: "; cin >> a;
    cin.ignore(90,'\n');
    
    cout << "Entre o valor <B>: "; cin >> a;
    cin.ignore(90,'\n');
    
    cout << "\n";
    r = a + b;
    if(r > 10)
        cout << "Resultado = " << r << endl << endl;
    cout << "Tecle <Enter> para encerrar";
}
