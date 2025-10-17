#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;
   
    cout<<"Digite numeros (digite 0 para parar): "<<endl;
    cin>>numero;

    while (numero != 0)
    {
        soma+=numero;
        cin>>numero;
    
    }

    cout<<"A soma dos numeros digitados e: "<<soma <<endl;
    

    return 0;
}
