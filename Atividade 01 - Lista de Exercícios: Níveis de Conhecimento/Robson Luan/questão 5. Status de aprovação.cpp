#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	double n1, n2, n3;
	double media;
	
	cout << "   status de aprovacao" << endl;
	cout << "digite suas notas (0 a 10)" << endl;
	
	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	media = (n1 + n2 + n3)/3;
	cout << fixed << setprecision(1);
	cout <<"a media foi___" << media << endl;

	if (media >= 7) {
		cout << "aprovado" << endl;
	} else if (media >= 5 && media < 7) {
		cout << "recupecao" << endl;
	} else if ( media < 5) {
		cout << "reprovado" << endl;
	}
	return 0;
}
