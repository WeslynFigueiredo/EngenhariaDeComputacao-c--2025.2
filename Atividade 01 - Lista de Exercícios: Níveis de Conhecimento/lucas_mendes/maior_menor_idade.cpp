#include <iostream>
using namespace std;
main() {
    int idade;
    cout<<"Informe sua idade: "<<endl;
    cin>> idade;
    if (idade >=18){
        cout<<"Voce e maior de idade, já pode se embebedar :)."<<endl;
    }else{
        cout<<"Passe longe do alcool, voce e menor de idade."<<endl;
    }
    return 0;
}
