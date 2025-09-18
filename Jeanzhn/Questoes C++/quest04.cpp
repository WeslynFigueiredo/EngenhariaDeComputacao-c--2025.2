#include <iostream>
#include <string>

int main() {
	std::string user, senhinha;
	
	std::cout << "Seu usuario:";
	std::cin >> user;
	std::cout <<"Sua senha";
	std::cin >> senhinha;
	
	if (user == "admin" && senhinha=="1234"){
		std::cout << "login deu certo"; 
	} else {
		std::cout << "login ou senha errado jovem";
	}
	return 0;	
}
