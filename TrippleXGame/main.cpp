#include <iostream> //preprocessor directive 

int main() {
	std::cout << "You entered the vault of the ancient vampire." << std::endl;
	std::cout << "You need to guess three digits to open the mechanical lock!" << std::endl;
	
	int a = 4; //declaration statement
	int b = 4;
	int c = 4;

	//a = 66666l;

	int sum = a + b + c; //expression statement
	int multp = a * b * c;

	std::cout << std::endl;
	std::cout << "+ There are three numbers in the code" << std::endl;
	std::cout << "+ They sum add-up to: " << sum << std::endl;
	std::cout << "+ They multiply to: "<< multp << std::endl;

	return 0; //return statement
}