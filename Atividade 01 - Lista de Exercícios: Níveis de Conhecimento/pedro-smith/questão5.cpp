#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, media;

    cout << "Digite a primeira nota (0 a 10): ";
    cin >> n1;
    cout << "Digite a segunda nota (0 a 10): ";
    cin >> n2;
    cout << "Digite a terceira nota (0 a 10): ";
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    cout << "Média = " << media << endl;

    if (media >= 7.0) {
        cout << "Aprovado" << endl;
    } else if (media >= 5.0 && media < 7.0) {
        cout << "Recuperação" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}
