#include <iostream>

int main()
{
	// Create an array and initialise it with 5 integer values
	int FirstArray[5] = { 11, 58, 4, 77, 9 };

	// Print out the 2nd element in FirstArray
	std::cout << "FirstArray[2] = " << FirstArray[2] << std::endl;

	// Create another array with enough memory for 5 integers but do not initialise the elements
	int SecondArray[5];

	// Initialise the values of SecondArray individually
	SecondArray[0] = 84;
	SecondArray[1] = 59;
	SecondArray[2] = 7;
	SecondArray[3] = 11;
	SecondArray[4] = 19;

	// Print out the 0th element in SecondArray
	std::cout << "SecondArray[0] = " << SecondArray[0] << std::endl;

	// Add the 1st element of each array together
	int result = FirstArray[1] + SecondArray[1];

	// Print the result
	std::cout << "The result of FirstArray[1] + SecondArray[1] is: " << result << std::endl;

	return 0;
}