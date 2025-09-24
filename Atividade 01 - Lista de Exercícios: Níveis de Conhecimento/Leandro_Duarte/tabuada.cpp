#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int numero;
    
 cout << "digite um numero de 1 a 10:" << endl;
 cin >> numero;
 
 while (i <= 10){
    cout << numero << " x " << i << " = " << numero*i << endl;
    i++;
 }
   return 0;
}
