#include <iostream>
using namespace std;

int main() {
    string frase;
    int vogais = 0;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    for (char c : frase) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vogais++;
    }

    cout << "Total de vogais: " << vogais << endl;

    return 0;
}
