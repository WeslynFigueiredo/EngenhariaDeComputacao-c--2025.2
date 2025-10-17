#include <iostream>;
using namespace std;

int main() {

int n, c = 1;

cout << "Informe um numero para ver sua tabuada: ";
cin >> n;

while (c <= 10){
	
	cout << n << " * " << c << " = " << n * c << endl;
	c = c + 1;

}

return 0;

}
