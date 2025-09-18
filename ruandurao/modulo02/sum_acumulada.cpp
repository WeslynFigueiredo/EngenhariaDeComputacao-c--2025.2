#include <iostream>
using namespace std;

int main(){
    cout << "--- SOMADOR DE 0 A 50 ---\n";
    int num = 0, cont = 1;
    while (cont <= 50){
        num += cont;
        cout << num << endl;
        cont++;
    }

    return 0;
}