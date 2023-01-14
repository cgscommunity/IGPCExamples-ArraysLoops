#include <iostream>

int main()
{
	// Variables to store data
	bool isValid = false;
	int numEntered = 0;

	do
	{
		// Ask the user to enter an integer between 10 and 20
		std::cout << "Enter an integer between 10 and 20: ";
		std::cin >> numEntered;

		// Check the number is in the requested range, set isValid to true
		// this will cause the loop to end. If the number is outside that
		// range set the isValid bool to false, continuing the loop.
		if (numEntered >= 10 && numEntered <= 20)
		{
			isValid = true;
		}
		else
		{
			isValid = false;

			std::cout << "That number is not between 10 and 20, please try again." << std::endl;
		}

	} while (!isValid); // Continue loop as long as isValid == false

	// Final message printed now the loop is over
	std::cout << "Thanks for entering " << numEntered << ", that number is between 10 and 20." << std::endl;
}