#include <stdio.h>
#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
   double n = 3.14159, area = 0, raio;
   cin >> raio;
   area = n * (raio * raio);
   cout << "A=" << fixed << setprecision(4) << area << endl;
    return 0;
}