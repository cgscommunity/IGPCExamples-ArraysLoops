#include <iostream>
#include <stdlib.h>

// Function declaration for "GenerateRandomNumber"
int GenerateRandomNumber();

int main()
{
	// Seed the random number generator with the current time
	srand(time(0));

	// Create an integer array of size 10
	int RandomNumberArray[10];

	// Loop over each element in the array and initialise it with a
	// random number returned from GenerateRandomNumber()
	for (int i = 0; i < 10; i++)
	{
		RandomNumberArray[i] = GenerateRandomNumber();
	}

	// Loop over the array again this time printing out each value
	for (int i = 0; i < 10; i++)
	{
		std::cout << "RandomNumberArray[" << i << "] = " << RandomNumberArray[i] << std::endl;
	}
}

// Function definition for "GenerateRandomNumber", creates a random integer between
// 0 and 100 and returns it.
int GenerateRandomNumber()
{
	return rand() % 100;
}