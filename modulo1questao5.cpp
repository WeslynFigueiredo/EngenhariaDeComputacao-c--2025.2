#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  double nota1;
  double nota2;
  double nota3;
  double media;

  cout << "Coloque a primeira nota: ";
  cin >> nota1;
  cout << "Coloque a segunda nota: ";
  cin >> nota2;
  cout << "Coloque a terceira nota: ";
  cin >> nota3;
  
  media = (nota1+nota2+nota3)/3;

  if(media >= 7){
    cout << "Aprovado" << endl;
} else if(media < 5){
	cout << "Reprovado";
} else {
	cout << "Recuperação";
}

return 0;
}
  
