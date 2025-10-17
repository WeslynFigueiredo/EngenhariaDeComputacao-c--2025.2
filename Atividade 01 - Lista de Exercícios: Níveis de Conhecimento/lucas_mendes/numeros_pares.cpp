#include <iostream>
using namespace std;

int main() {
    int contador = 1;

    cout<<"Numeros pares de 1 a 20"<<endl;

    while (contador <= 20)

    {
        if(contador % 2 == 0){
            cout << contador << " ";
        }
        contador++;
    }

    cout <<endl;
    

    return 0;
}
