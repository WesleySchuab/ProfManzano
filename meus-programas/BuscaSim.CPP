// Programa que compara preços usando uma matriz

#include<iostream>
#include<iomanip>

using namespace std;
//string stringready(){

//}
int main (void)
{
  string value[3];
  string name[3], x;

   // for(int i = 0; i <= 1; i++)
      //{
         cout << "Digite o nome do produto " << setw(2) <<1 <<" " ;        
         getline(cin, name[1]);
        for(int j = 1; j <= 2; j++){
            cout << "Digite o preço do produto " << setw(2) <<j <<" " ;  
            getline(cin, value[0]);
            //cout << endl << endl;
          }
     // }

    for(int i = 0; i <= 1; i++){
      for(int j =1; j <= 1; j++){
         x = value[i];
        value[i] = value[j];
        value[j] = x;        
    }
  }
  //for(int i=0; i<=2; i++){
    cout << "O menor preço do produto " << name[1] << " custa " << x;
  //}
return 0;
}
