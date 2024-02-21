#include <iostream>
using namespace std;
int main(void){
    char nome[50];
    cout <<"ola.\n qual sua graça ?";
    cin.getline(nome, 50);
    cout << endl;
    cout <<" oi " << nome << ", vamos estudar. " << endl;

    cout << "tecle <enter> para encerrar...";
    cin.get();
return 0;
}
