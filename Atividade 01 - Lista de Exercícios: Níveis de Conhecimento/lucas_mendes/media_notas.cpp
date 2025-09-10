#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float nota1, nota2, nota3;

    cout << "Informe a primeira nota: " << endl;
    cin >> nota1;

    cout << "Informe a segunda nota: " << endl;
    cin >> nota2;

    cout << "Informe a terceira nota: " << endl;
    cin >> nota3;

    float media_nota = (nota1 + nota2 + nota3) / 3;

    if (media_nota >= 7) {
        cout << "Parabens, voce foi aprovado" << endl;
    } else if (media_nota >= 5 && media_nota < 7) {
        cout << "Voce ficou na recuperacao, estude mais!" << endl;
    } else {
        cout << "Voce foi reprovado, procure se esforcar mais para o proximo ano" << endl;
    }
    //formatar para uma ou mais casas decimais !!!
    cout << fixed << setprecision(1);
    cout << "Sua media final foi de " << media_nota << endl;

    return 0;
}
