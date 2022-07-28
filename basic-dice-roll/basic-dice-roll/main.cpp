#include <iostream>
#include <cstdlib>


int rollDice();


int rollDice() {
	int roll;
	int min = 1; 
	int max = 6;

	roll = rand() % (max - min + 1) + min;

	return roll;
}

int main()
{
	int rolls;
	std::cout << "Enter the amount of rolls: ";
	std::cin >> rolls;
	std::cout << "You chose this amount: " << rolls << "\n";
	srand(time(0));
	for (int i = 0; i < rolls; i++)
	{
		std::cout << rollDice() << std::endl;
	}

}

