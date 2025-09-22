#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int num_1;
    int num_2;
    cout << "Digite o primeiro numero" << endl;
    cin >> num_1;
    cout << "Digite o segundo numero"<< endl;
    cin >> num_2;

    if (num_1 < num_2){
        cout <<"o primeiro numero e menor";
    }
    else if (num_2 < num_1){
        cout <<"o segundo numero e menor";
    }
    else if (num_1 == num_2){
        cout << "os numeros sao iguais";
    }
}