#include <iostream> //preprocessor directive 
#include <windows.h>

void PrintIntroduction(int Difficulty) {

	std::cout << "\n\nWchodzisz do " << Difficulty << " sali skarbca \033[1mTeodora\033[0m. \n";
	std::cout << "Musisz odgadnac trzy cyfry kodu, zeby otworzyc mechaniczny zamek! \n";

}
bool PlayGame(int Difficulty) {

	PrintIntroduction(Difficulty);

	int CodeA = 4; //declaration statement
	int CodeB = 4;
	int CodeC = 4;

	int CodeSum = CodeA + CodeB + CodeC; //expression statement
	int CodeProduct = CodeA * CodeB * CodeC; 

	std::cout << "\n+ Sa trzy cyfry w kodzie:";
	std::cout << "\n+ Ich suma to: " << CodeSum;
	std::cout << "\n+ Gdy je pomnozyc, wynik bedzie: " << CodeProduct;

	int GuessA, GuessB, GuessC;

	std::cout << "\n\nPodaj cyfry: ";
	std::cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (CodeSum == GuessSum && CodeProduct == GuessProduct) {
		
		std::cout << "\n\033[1mWygrales!!\033[0m";
		return true;

	}	else {
		std::cout << "\n\033[1mPrzegrales!\033[0m";
		return false;
	}
}

int main() {
	// Set console output to UTF-8
	SetConsoleOutputCP(CP_UTF8);

	int LevelDifficulty(1);
	int const MaxDifficulty(5);

	//nt LevelDifficulty = 1;

	while (LevelDifficulty <= MaxDifficulty) {

		bool bLevelComplete = PlayGame(LevelDifficulty);
		std::cin.clear();
		std::cin.ignore();
		
		if (bLevelComplete)
		{
			++LevelDifficulty; 
		}
	}

	return 0; //return statement
}