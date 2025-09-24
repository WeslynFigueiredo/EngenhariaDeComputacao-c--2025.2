#include <iostream>
using namespace std;

int main(){
    int i = 1;
    
    cout << "numeros pares de 1 a 20: " << endl;
    
    while(i <= 20){
        if (i % 2 == 0) {
            cout << i << " ";
        }
         i++;
    }
    
    cout << endl;
    
    return 0;
}
