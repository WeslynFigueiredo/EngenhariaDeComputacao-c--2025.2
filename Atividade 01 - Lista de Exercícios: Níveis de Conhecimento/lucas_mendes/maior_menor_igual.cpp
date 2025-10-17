#include <iostream>
using namespace std;
main() {
    int numero1;
    int numero2;
    cout<<"Informe o primeiro numero: "<<endl;
    cin>> numero1;
    cout<<"Informe o segundo numero: "<<endl;
    cin>> numero2;
    if (numero1 > numero2){
        cout<<"O numero " <<numero1 << " e maior que o numero " << numero2 <<endl;
        
    }else if(numero1 == numero2){
        cout<<"Os numeros " <<numero1<< " e " <<numero2<<" são iguais"<<endl;
    }else{
        cout<<"O numero " <<numero2<< " e maior que o numero "<<numero1<<endl;
    }
 
    return 0;
}
