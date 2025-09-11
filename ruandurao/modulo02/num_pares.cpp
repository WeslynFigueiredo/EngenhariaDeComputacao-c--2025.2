#include <iostream>
using namespace std;

int main(){
    int num = 0, cont = 0;
    while(cont <= 20){
        if(num % 2 == 0){
            cout << num << endl;
        }
        num++; cont++;
    }

    return 0;
}