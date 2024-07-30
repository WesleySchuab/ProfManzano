//C03EX03.CPP

#include<iostream>
using namespace std;
int main(void){
    int a, b,x;

    cout << "Entre o valor <A>: "; cin >> a;
    cin.ignore(90,'\n');

    cout << "Entre o valor <B>: "; cin >> b;
    cin.ignore(90,'\n');

    cout << "\n";



    if(a > b)
    {
        x = a;
        a = b;
        b = x;
    }
    cout << "Os valores ordenados são: " << a;
    cout << " e " << b << "." << endl << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}
