// Programa que compara preços usando uma matriz

#include<iostream>
#include<iomanip>

using namespace std;

int main (void)
{
  string value[4];
  string name[3], x;
  string *px = &x;

   // for(int i = 0; i <= 1; i++)
      //{
         cout << "Digite o nome do produto " << setw(2) <<1 <<": " ;        
         getline(cin, name[1]);
        for(int j = 1; j <= 3; j++){
            cout << "Digite o preço do produto " << setw(2) <<j <<": "; getline(cin, value[j]);
          }
     // }

    for(int i = 1; i <= 3; i++){
      for(int j =2; j <= 3; j++){
              if(value[i] > value[j]) {
                        *px = value[i];
                      value[i] = value[j];
                      value[j] = *px; 
              }

    }
  }

    cout << "O menor preço do produto " << name[1] << " custa " << value[1];

return 0;
}