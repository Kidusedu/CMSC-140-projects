/*
 * Class: CMSC140 CRN
 * Instructor:Ahmed Tarek
 * Project<4>
 * Description: the program below calculates the average number 
   of days a company's employees are absent during the year and outputs
   a report on a file named "employeeAbsences.txt".  
 * Due Date:11/12/19
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Kidus Tilahun
   */







#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int NumofEmployees();
int TotalDaysAbsent(int);
double AverageAbsent(int, int);
ofstream outFile;

int main()
{
	outFile.open("employeeAbsences.txt");
	outFile << setprecision(1) << fixed << showpoint;

	double average;
	int numEmployees;
	int totAbsences;

	cout << "Calculate the average number of days a company's employees are absent.\n\n";
	numEmployees = NumofEmployees();
	outFile << "EMPLOYEE ABSENCE REPORT\n";
	totAbsences = TotalDaysAbsent(numEmployees);
	average = AverageAbsent(numEmployees, totAbsences);
	outFile << "\nThe " << numEmployees << " employees were absent a total of " << totAbsences << " days.\nThe average number of days absent is " << average << " days.\n\n";
	outFile << "Programmer: Kidus Tilahun\n";
	outFile.close();
	cout << "Programmer : Kidus Tilahun";
	return 0;
}
int NumofEmployees()
{
	int num;
	cout << "Please enter the number of employees in the company: ";
	cin >> num;
	while (num < 1)
	{
		cout << "The number of employees cannot be less than one.\n"
			<< "Please re-enter the number of employees: ";
		cin >> num;
	}
	return num;
}
int TotalDaysAbsent(int numEmployees)
{
	int total = 0;
	int id;
	int days;

	for (int i = 0; i < numEmployees; i++)
	{
		cout << "Please enter an employee ID: ";
		cin >> id;
		cout << "Please enter the number of days this employee was absent: ";
		cin >> days;
		while (days < 0)
		{
			cout << "The number of days must not be negative.\n"
				<< "Please re-enter the number of days absent: ";
			cin >> days;
		}
		outFile << setw(8) << id << setw(10) << days << endl;
		total += days;
	}
	return total;
}

double AverageAbsent(int numEmployees, int totAbsences)
{
	double avg = static_cast<double>(totAbsences) / numEmployees;
	return avg;
}