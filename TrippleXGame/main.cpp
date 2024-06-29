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
	std::cout << "+ There are three numbers in the code \n"
	std::cout << "+ They sum add-up to: " << CodeSum << std::endl;
	std::cout << "+ They multiply to: "<< CodeProduct << std::endl;

	int GuessA, GuessB, GuessC;

	std::cout << "Enter a number: \n";
	std::cin >> GuessA >> GuessB >> GuessC;

	//std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (CodeSum == GuessSum && CodeProduct == GuessProduct) {
		std::cout << "You won!!" << std::endl;
	}
	else {
		std::cout << "You lost!";
	}
	
	return 0; //return statement
}