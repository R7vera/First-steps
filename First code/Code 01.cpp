#include <iostream>

int main(){
	double x, y, resta, sumar;
	std::cout << "Ingresa numeros para sumar y restar \n";
	std::cout << "Primer Numero: \n";
	std::cin >> x;
	std::cout << "Segundo Numero: \n";
	std::cin >> y;
	
	resta = x - y;
	sumar = x + y;
	
	std::cout << "SUMA: " << sumar << "\n";
	std::cout << "RESTA: " << resta << "\n";
	
	return 0;
}
