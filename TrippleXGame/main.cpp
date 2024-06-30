#include <iostream> //preprocessor directive 

void PrintIntroduction() {

	std::cout << "You entered the vault of the ancient vampire. \n";
	std::cout << "You need to guess three digits to open the mechanical lock! \n\n";

}
void PlayGame() {

	PrintIntroduction();

	int CodeA = 4; //declaration statement
	int CodeB = 4;
	int CodeC = 4;

	int CodeSum = CodeA + CodeB + CodeC; //expression statement
	int CodeProduct = CodeA * CodeB * CodeC;

	std::cout << "+ There are three numbers in the code: \n";
	std::cout << "\n+ They sum add-up to: " << CodeSum;
	std::cout << "\n+ They multiply to: " << CodeProduct;

	int GuessA, GuessB, GuessC;

	std::cout << "\n\nEnter a number: ";
	std::cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (CodeSum == GuessSum && CodeProduct == GuessProduct) {
		std::cout << "\nYou won!!";
	}	else {
		std::cout << "\nYou lost!";
	}
}

int main() {
	
	PlayGame();
	return 0; //return statement
}