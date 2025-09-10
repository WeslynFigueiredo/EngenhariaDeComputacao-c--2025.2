#include <iostream>
using namespace std;
main() {
    int numero;
    cout<<"Insira um número: "<<endl;
    cin>> numero;
    if (numero % 2 ==0){
        cout<<"O numero e par."<<endl;
    }else{
        cout<<"O numero e impar."<<endl;
    }
    return 0;
}
