#include <iostream> //preprocessor directive 

int main() {
	std::cout << "You entered the vault of the ancient vampire." << std::endl;
	std::cout << "You need to guess three digits to open the mechanical lock!" << std::endl;
	
	int CodeA = 4; //declaration statement
	int CodeB = 4;
	int CodeC = 4;

	//a = 66666l;

	int CodeSum = CodeA + CodeB + CodeC; //expression statement
	int CodeProduct = CodeA * CodeB * CodeC;

	std::cout << std::endl;
	std::cout << "+ There are three numbers in the code" << std::endl;
	std::cout << "+ They sum add-up to: " << CodeSum << std::endl;
	std::cout << "+ They multiply to: "<< CodeProduct << std::endl;

	int PlayerGuess;

	return 0; //return statement
}