#include <iostream>
using namespace std;

int main(){
    float n1, n2, n3;
    float soma;
    float divisao = 3;
    
    cout << "dale a primeira nota" << endl;
    cin >> n1;
    
    cout << "Dale a segunda nota" << endl;
    cin >> n2;
    
    cout << "Dale a terceira mn" << endl;
    cin >> n3;
    
    soma = (n1 + n2 + n3) / divisao;
    
    if (soma < 5) {
        cout << "desista o quanto antes!! (reprovado)";
    } else if (soma >= 5 && soma < 7) {
        cout << "encontra os mlks la na sala kkk (recuperação)";
    }
        else { 
            
            cout << "passou meu consagrado!!";
        
        
    }
    return 0;
}
