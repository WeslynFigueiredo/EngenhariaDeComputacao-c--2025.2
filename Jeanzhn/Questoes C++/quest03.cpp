#include <iostream>;
int main (){
	int numdebraco1, numdebraco2;
	std:: cout << "digita um numero :" ;
	std::cin >> numdebraco1;
	std:: cout << "digita um numero :" ;
	std::cin >> numdebraco2;
	
	if (numdebraco1 > numdebraco2){
		std::cout << "O primeiro numero digitado " << numdebraco1 << "é MAIOR que o numero "<< numdebraco2;
		
	} else if (numdebraco1 < numdebraco2){
		std::cout << "O primeiro numero digitado " << numdebraco1 << "é MENOR que o numero "<< numdebraco2;
	} else {
		std::cout << "Os numeros são iguais";
	}
}
