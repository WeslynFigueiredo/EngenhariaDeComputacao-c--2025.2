#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int num;
    srand(time(0));
    cout << "--- ADIVINHE O NUMERO ---\n";
    cout << "Insira um numero de 1 a 100: "; cin >> num;
    int rnum = (rand() % 100) + 1;
    while(num != rnum){
        if(num > rnum){
            cout << "O seu numero e maior que o gerado. Insira outro numero: ";
        } else if (num < rnum){
            cout << "O seu numero e menor que o gerado. Insira outro numero: ";
        }
        cin >> num;
    }

    cout << "VOCE ACERTOU! O NUMERO ERA " << rnum;

    return 0;
}