#include <iostream>
#include <iomanip>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);

int main()
{

	//int magicArray[ROWS][COLS];
	// Your code goes here
	const int PROJECT_NUMBER = 5; // Store assignment number

	// Define 3 parallel arrays corresponding to each row of ints
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
	char again = 'y';

	do {

		fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS); // Call the function fillArray

		showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS); // Call the function showArray

		if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS))
		{
			cout << "This is a Lo Shu magic square." << endl;
		}
		else
			cout << "This is not a Lo Shu magic square." << endl;

		// Does the user want to play again?
		cout << "\n\nDo you want to try again? ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	/* Programmer's name, assignment number, and due date to display at the end of the program*/

	cout << setw(1) << "\nPROGRAMMER: " << "Kidus Tilahun" << endl; //Programmer's name
	cout << setw(1) << "CMSC140 Project: " << 5 << endl; // Assignement number
	cout << setw(1) << "Due Date: " << "12/05/2019" << endl; // Assignement due date

	system("pause");
	return 0;
}

// Get 3 integer input from the user for each array

void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int rowNum = 0;
	for (int colNum = 0; colNum < size; colNum++)
	{
		cout << "Enter the number for row " << rowNum
			<< " and for column " << colNum << " : ";
		cin >> arrayRow1[colNum];
	}
	rowNum++; // Increment by 1

	for (int colNum = 0; colNum < size; colNum++)
	{
		cout << "Enter the number for row " << rowNum
			<< " and for column " << colNum << " : ";
		cin >> arrayRow2[colNum];
	}
	rowNum++; // Increment by 1 one more time

	for (int colNum = 0; colNum < size; colNum++)
	{
		cout << "Enter the number for row " << rowNum
			<< " and for column " << colNum << " : ";
		cin >> arrayRow3[colNum];
	}

}

// Display the 3 integer input by the user in rows and columns

void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	int rowNum = 0;
	for (int colNum = 0; colNum < size; colNum++)
	{
		cout << arrayrow1[colNum] << " ";
	}
	cout << endl;
	rowNum++; // Increment by 1

	for (int colNum = 0; colNum < size; colNum++)
	{
		cout << arrayrow2[colNum] << " ";
	}
	cout << endl;
	rowNum++; // Increment by 1 one more time

	for (int colNum = 0; colNum < size; colNum++)
	{
		cout << arrayrow3[colNum] << " ";
	}
	cout << endl;
}

// Check if the 3 integer input by the user are within the range 1 and 9

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{
	bool status = true; // status initialized to true

	// step through the values in the array
	for (int colNum = 0; colNum < COLS; colNum++)
	{
		// Check the range of the value and report its status
		if (arrayRow1[colNum] < min || arrayRow1[colNum] > max)
		{
			status = false; // set the status to false if so
		}

		else if (arrayRow2[colNum] < min || arrayRow2[colNum] > max)
		{
			status = false; // set the status to false if so
		}

		else if (arrayRow3[colNum] < min || arrayRow3[colNum] > max)
		{
			status = false; // set the status to false if so
		}
	}
	return status;
}

// Check if the 3 integer input by the user are unique (one occurence) within the range 1 and 9

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	int i = 0, j = 0, k = 0;
	bool status = true; // status initialized to false

	while (i < (sizeof(arrayRow1) / sizeof(arrayRow1[0]))
		&& j < (sizeof(arrayRow2) / sizeof(arrayRow2[0]))
		&& k < (sizeof(arrayRow3) / sizeof(arrayRow3[0])))
	{
		if ((arrayRow1[i] == arrayRow2[j]) && (arrayRow2[j] == arrayRow3[k]))
		{
			if (i > 1)
			{
				status = false;
			}

			i++;
			j++;
			k++;
		}

		else if (arrayRow1[i] < arrayRow2[j])
			i++;
		else if (arrayRow2[j] < arrayRow3[k])
			j++;
		else
			k++;
	}
	return status;
}

// Check if the sum of the 3 integer input by the user for each row are equal

bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	bool status = true; // status initialized to true

	// Sum of the values of Row1
	int sumRow1 = arrayrow1[0] + arrayrow1[1] + arrayrow1[2];

	// Sum of the values of Row2
	int sumRow2 = arrayrow2[0] + arrayrow2[1] + arrayrow2[2];

	// Sum of the values of Row3
	int sumRow3 = arrayrow3[0] + arrayrow3[1] + arrayrow3[2];

	// Determine if the sum of the rows is not equal
	if ((sumRow1 != sumRow2) ||
		(sumRow1 != sumRow3) ||
		(sumRow2 != sumRow3))
	{
		status = false; // set status to false
	}
	return status;
}

// Check if the sum of the 3 integer input by the user for each column are equal

bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	bool status = true; // status initialized to true

	// Sum of the values of Column1
	int sumCol1 = arrayrow1[0] + arrayrow2[0] + arrayrow3[0];

	// Sum of the values of Column2
	int sumCol2 = arrayrow1[1] + arrayrow2[1] + arrayrow3[1];

	// Sum of the values of Column3
	int sumCol3 = arrayrow1[2] + arrayrow2[2] + arrayrow3[2];

	// Determine if the sum of the columns is not equal
	if ((sumCol1 != sumCol2) ||
		(sumCol1 != sumCol3) ||
		(sumCol2 != sumCol3))
	{
		status = false; // set status to false
	}
	return status;

}

// Check if the sum of the diagonals are equal

bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	bool status = true; // status initialized to true

	// Sum of the values of Diagonal1
	int sumDiag1 = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];

	// Sum of the values of Diagonal2
	int sumDiag2 = arrayrow1[2] + arrayrow2[1] + arrayrow3[0];

	// Determine if the sum of the columns is not equal
	if (sumDiag1 != sumDiag2)
	{
		status = false; // set status to false
	}
	return status;
}

// Check if all the integer input by the user constitute a Magic Square

bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	bool status = false;

	// Call the functions to check the array

	bool isInRange = checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX);

	bool isUnique = checkUnique(arrayRow1, arrayRow2, arrayRow3, size);

	bool isRowEqual = checkRowSum(arrayRow1, arrayRow2, arrayRow3, size);

	bool isColEqual = checkColSum(arrayRow1, arrayRow2, arrayRow3, size);

	bool isDiagEqual = checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size);

	

	// Check if all requirements are respected

	if (isInRange && isUnique && isRowEqual
		&& isColEqual && isDiagEqual)
	{
		status = true; // set status to true if so
	}
	return status;

}