#include <iostream> //preprocessor directive 

void PlayGame() {

	std::cout << "You entered the vault of the ancient vampire. \n";
	std::cout << "You need to guess three digits to open the mechanical lock! \n\n";

	int CodeA = 4; //declaration statement
	int CodeB = 4;
	int CodeC = 4;

	//a = 66666l;

	int CodeSum = CodeA + CodeB + CodeC; //expression statement
	int CodeProduct = CodeA * CodeB * CodeC;

	std::cout << "+ There are three numbers in the code \n";
	std::cout << "\n+ They sum add-up to: " << CodeSum;
	std::cout << "\n+ They multiply to: " << CodeProduct;

	int GuessA, GuessB, GuessC;

	std::cout << "Enter a number: \n";
	std::cin >> GuessA >> GuessB >> GuessC;

	//std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (CodeSum == GuessSum && CodeProduct == GuessProduct) {
		std::cout << "\n You won!!";
	}
	else {
		std::cout << "\n You lost!";
	}

}

int main() {
	
	PlayGame();
	return 0; //return statement
}