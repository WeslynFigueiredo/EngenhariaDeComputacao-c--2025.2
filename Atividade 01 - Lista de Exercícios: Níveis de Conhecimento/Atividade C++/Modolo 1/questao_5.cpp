//Status de Aprovação: Faça um programa que leia três notas de um aluno (de 0 a 10). 
//Calcule a média. Se a média for maior ou igual a 7, imprima "Aprovado". Se for entre 5 e 6.9,
//imprime “Recuperação”. Se for menor que 5, imprima "Reprovado".

#include <iostream>
using namespace std;

int main (){
    double media;
    double nota_1, nota_2, nota_3;
    cout << "Calcule a media da sua nota";
    cout<<"Digite a primeira nota"<<endl;
    cin>>nota_1;
    cout<<"Digite a segunda nota"<<endl;
    cin>>nota_2;
    cout<<"Digite a terceira nota"<<endl;
    cin>>nota_3;

    media = ((nota_1 +  nota_2 + nota_3)/3);
    if (media < 5){
        cout <<"voce tirou: "<<media<<endl;
        cout << "REPROVADO"<<endl;
    }
    else if (media==5 ||media <=6.9){
        cout <<"voce tirou: "<<media<<endl;
        cout<< "Recuperacao"<<endl;
    }
    else{
        cout <<"ta livre"<<endl;
    }
    return 0;
}