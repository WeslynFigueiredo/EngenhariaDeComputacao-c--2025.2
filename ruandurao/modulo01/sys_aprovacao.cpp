#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    double nota0, nota1, nota2;
    cout << "--- VALIDAR NOTA DE ALUNO ---\n";
    cout << "Insira a primeira nota: "; cin >> nota0;
    cout << "Insira a segunda nota: "; cin >> nota1;
    cout << "Insira a terceira nota: "; cin >> nota2;

    cout << fixed << setprecision(1);

    double media = (nota0 + nota1 + nota2)/3;
    cout << "A nota final do aluno e " << media << endl;
    if(media >= 7.0){
        cout << "Ele passou. Parabens pra ele.";
    } else if (media <= 4.9){
        cout << "Ele reprovou. Zero chances pra ele";
    } else {
        cout << "Ele vai reprovar, mas pode passar com uma recuperao.";
    }

    return 0;
}