#include <iostream>

int main()
{
	// Create variable to store data
	int numEntered = 0;

	// Ask the user to enter a number
	std::cout << "Enter a number: ";
	std::cin >> numEntered;

	// Loop upward from 0 to the number entered
	for (int i = 0; i <= numEntered; i++)
	{
		// Print out the current value of i
		std::cout << i << " ";
	}
	
	// Print an end line character
	std::cout << std::endl;

	// Loop downward from the number entered to 0
	for (int i = numEntered; i >= 0; i--)
	{
		// Print out the current value of i
		std::cout << i << " ";
	}

	// Print an end line character
	std::cout << std::endl;

	return 0;
}