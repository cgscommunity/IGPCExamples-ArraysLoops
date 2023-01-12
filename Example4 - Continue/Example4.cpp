#include <iostream>

int main()
{
	// For loop using a counter i which starts at 0 and increments until i is 10 or more
	for (int i = 0; i < 10; i++) 
	{
		// Check to see if i contains a value of 4
		if (i == 4) 
		{
			// i is 4 so end the current loop iteration and go on to the next one
			continue;
		}

		// Print out the current value of i
		std::cout << "i = " << i << std::endl;
	}

	return 0;
}