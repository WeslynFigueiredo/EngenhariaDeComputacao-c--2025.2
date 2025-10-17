#include <iostream>
using namespace std;

int main(){
    string num;
    int count = 0, countSec = 0;
    cout << "--- PALINDROMO DE NUMERO ---\n";
    cout << "Insira um numero : "; cin >> num;

    count = num.length();
    bool isPalindromo = true;
    while(count > 0){
        cout << (int(num[countSec]) - '0') << " | " << (int(num[count-1] - '0'))  << endl;

        if((int(num[countSec]) - '0') != (int(num[count-1] - '0'))){
            isPalindromo = false;
            break;
        }

        if(countSec == (count-1)){
            break;
        }

        countSec++;
        count--;
    }

    if(isPalindromo){
        cout << "O numero '" << num << "' e um palindromo";
    } else {
        cout << "O numero '" << num << "' nao e um palindromo";
    }

    return 0;
}