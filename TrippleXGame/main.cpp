#include <iostream> //preprocessor directive 
#include <ctime>

void PrintIntroduction(int Difficulty, bool Action) {
	
	if (Action) {
		std::cout << "Wchodzisz do " << Difficulty << " sali skarbca \033[1mTeodora\033[0m. \n";
	}
	else {
		std::cout << "Jestes w " << Difficulty << " sali skarbca \033[1mTeodora\033[0m. \n";
	}
	
	std::cout << "Musisz odgadnac trzy cyfry kodu, zeby otworzyc mechaniczny zamek! \n";

}
bool PlayGame(int Difficulty, bool Action) {

	PrintIntroduction(Difficulty, Action);

	int CodeA = rand() % Difficulty + Difficulty;
	int CodeB = rand() % Difficulty + Difficulty;
	int CodeC = rand() % Difficulty + Difficulty;

	int CodeSum = CodeA + CodeB + CodeC; //expression statement
	int CodeProduct = CodeA * CodeB * CodeC; 

	std::cout << "\n+ Sa trzy cyfry w kodzie:";
	std::cout << "\n+ Ich suma to: " << CodeSum;
	std::cout << "\n+ Ich iloczyn to: " << CodeProduct;

	int GuessA, GuessB, GuessC;

	std::cout << "\n\nPodaj cyfry: ";
	std::cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (CodeSum == GuessSum && CodeProduct == GuessProduct) {
		
		std::cout << "\n\033[1mZamek otwarty!\033[0m\n" << "\nPrzechodzisz do nastepnej sali.\n\n";
		
		return true;

	}	else {
		std::cout << "\n\033[1mNie udalo sie!\033[0m \n" << "\nSproboj jeszcze raz!\n";
		
		return false;
	}
}

int main() {

	srand(time(NULL));

	int LevelDifficulty(1);
	int const MaxDifficulty(5);
	bool PlayerAction(true); // Initial value for Action


	//nt LevelDifficulty = 1;

	while (LevelDifficulty <= MaxDifficulty) {

		bool bLevelComplete = PlayGame(LevelDifficulty, PlayerAction);
		std::cin.clear();
		std::cin.ignore();
		
		if (bLevelComplete)
		{
			PlayerAction = true; // Set Action to true for the next level
			++LevelDifficulty; 
		}
		else {
			PlayerAction = false; // Set Action to false if the level was not completed
		}
	}
	std::cout << "\n\033[1mBrawo, udalo Ci sie otworzyc wszystkie zamki!\033[0m\n\n";
	return 0; //return statement
}