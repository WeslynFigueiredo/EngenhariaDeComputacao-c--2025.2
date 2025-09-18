#include <iostream>
using namespace std;

int main(){
    int num, fn = 0, fn1 = 0, fn2 = 1;
    cout << "--- FIBONACCI ---\n";
    cout << "Insira um numero: "; cin >> num;

    cout << fn1 << " " << fn2 << " ";
    while(num > 0){
        fn = (fn1 + fn2);
        cout << fn << " ";
        fn1 = fn2;
        fn2 = fn;
        num--;
    }

    return 0;
}