#include <iostream>
using namespace std;

int main(){
    int num;
    int tabuada = 1;
    cout << "--- TABUADA AUTOMATICA ---\n";
    cout << "Insira um numero para a tabuada: "; cin >> num;
    while(tabuada <= 10){
        cout << num << " x " << tabuada << " = " << (tabuada*num) << endl;
        tabuada++;
    }

    return 0;
}