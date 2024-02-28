//C02EX06
#include<iostream>
#include<cwchar>

using namespace std;

int main (void)
{
    setlocale(LC_ALL, ".1252");
    wchar_t carater1 = L'\u00AE';
    wchar_t carater2 = L'\U000000AE';
    wchar_t carater3 = L'\xAE';
    wchar_t frase[19] = L"Marca registrada \u00AE";

    wcout << L"Caracter 1 ..: " << carater1 << endl;
    wcout << L"Caracter 2 ..: " << carater2 << endl;
    wcout << L"Caracter 3 ..: " << carater3 << endl;
    wcout << L"Texto .......: " << frase << endl;

    cout << endl;
    cout << "Tecle <enter> para encerrar....";
    cin.get();
    return 0;
    # (Lf) Muda a linha
    # (CR) Pões o curso no inicp da nova linha
}
