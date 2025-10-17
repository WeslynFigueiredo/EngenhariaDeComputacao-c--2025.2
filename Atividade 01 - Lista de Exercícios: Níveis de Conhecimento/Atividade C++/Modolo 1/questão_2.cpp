#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int digite_idade;
    
    cout << "Digite sua idade" << endl;
    cin >> digite_idade;

    if (digite_idade >= 18){
        cout << "Você platinou a classificação indicativa";
    }
    else if (digite_idade < 18){
        cout << "Você ainda não chegou lá";
    }
    return 0;
}