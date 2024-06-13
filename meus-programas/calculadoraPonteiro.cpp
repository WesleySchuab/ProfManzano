//Progrma calculadora com ponteiro
#include<iostream>
using namespace std;

float soma(float valor1, float valor2)
{
        return valor1+valor2 ;
}

int main (void)
{
    float valor1 = 0 , valor2 = 0;
    float *pvalor1 = &valor1, *pvalor2 = &valor2;

    cout << "Digite o valor 1 ";
    cin >> *pvalor1;
    cin.ignore(80, '\n');

    cout << "Digite o valor 1 ";
    cin >> *pvalor2;
    cin.ignore(80, '\n');

    cout << *pvalor1 << " + " << *pvalor2 << " = " << soma(*pvalor1, *pvalor2);






}