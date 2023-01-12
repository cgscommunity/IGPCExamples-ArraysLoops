#include <iostream>

int main()
{
	// Create variables to store data
	int rows = 0;
	int columns = 0;

	// Ask the user to enter the number of rows
	std::cout << "Enter rows: ";
	std::cin >> rows;

	// Ask the user to enter the number of columns
	std::cout << "Enter columns: ";
	std::cin >> columns;

	// Loop for each column
	int currentColumn = 0;
	while (currentColumn < columns)
	{
		// Loop for each row
		int currentRow = 0;
		while (currentRow < rows)
		{
			// Print a symbol and increment row counter
			std::cout << "#";
			currentRow++;
		}

		// Print an end line character (carriage return) and increment column counter
		std::cout << std::endl;
		currentColumn++;
	}

	return 0;
}