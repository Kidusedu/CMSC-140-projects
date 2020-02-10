/*
 * Class: CMSC140
 * CRN:20136
 * Instructor:Ahmed Tarek
 * Project: 1
 * Due Date:09/19/19
 * Description: The Department plans to purchase a humanoid robot.
				The Chairman would like you to write a program to show
	a greeting script the robot can use later.
* I pledge that I have completed the programming assignment independently.
  I have not copied the code from a student or any source.
  I have not given my code to any student.
  Print your Name here: Kidus Tilahun*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name = ""; // users name
	string robot_name = "Nao";  // robots name
	int age;  // number inserted by user


	cout << "************************************************ Robot Prototype Scripting *****************************************\n\n";
	cout << "Hello, welcome to Montgomery College! My name is " << robot_name << ". may I have your name?\n";

	/* request users name*/
	getline(cin, name);

	cout << "Nice to have you with us today, " << name << "!\n";
	cout << "let me impress you with a small game.\n" << "Give me the age of an important person or a pet to you.\n" << "Please give me only a number:\n";

	/* request age of user */

	cin >> age; // age inserted by user
	cout << endl;
	cout << "you have entered " << age << ".\n";
	cout << " if this is for a person, the age can be expressed as:\n " << age << " years old.\n";

	long int months;
	const int one_year = 12; // one year = 12 months
	months = age * one_year; // calculate months
	cout << " or " << months << " months\n";

	long int days;
	const int one_month = 30; // one month = 30 days
	days = months * one_month; // calculate days
	cout << " or about " << days << " days\n";

	long int hours;
	const int one_day = 24; // one day = 24 hours
	hours = days * one_day; // calculate hours from days
	cout << " or about " << hours << " hours\n";

	long long int minutes;
	const int one_hour = 60; // one hour = 60 minutes
	minutes = hours * one_hour; // calculate minutes from hours
	cout << " or about " << minutes << " minutes\n";

	long long int seconds;
	const int one_minute = 60; // one minute = 60 second
	seconds = minutes * one_minute; // calculate seconds from minutes
	cout << " or about " << seconds << " seconds\n";

	int dog;
	const int one_dog_year = 7; // one dog year = 7 human years
	dog = age * one_dog_year; // calculate dog year from human age inserted by user
	cout << " if this is for a dog, it is " << dog << " years in human age.\n"; 

	long int goldfish;
	const int one_goldfish_year = 5; // one goldfish year = 5 human years
	goldfish = age * 5; // calculate goldfish year from human age inserted by user
	cout << " if this is for a gold fish, it is " << goldfish << " years in human age.\n\n";


	cout << "lets play another game, " << name << ". " << "Give me a whole nummber.\n";

	float whole_number_1;

	cin >> whole_number_1;
	cout << "Very well. give me another whole number.\n";

	float whole_number_2;

	cin >> whole_number_2;
	int whole_number_3; // results of adition and division in integer datatype

	whole_number_3 = whole_number_1 + whole_number_2; // addition operation
	cout << "using the operator '+' in c++, the result of " << whole_number_1 << " + " << whole_number_2 << " is " << whole_number_3 << ".\n";

	whole_number_3 = whole_number_1 / whole_number_2; // division operation
	cout << "using the operator '/' in c++, the result of " << whole_number_1 << " / " << whole_number_2 << " is " << whole_number_3 << ".\n";


	float whole_number_4; // float data type used so that result can be displayed in decimal
	whole_number_4 = whole_number_1 / whole_number_2; // division operation
	cout << "however, the result of " << whole_number_1 << ".0 / " << whole_number_2 << ".0 is about " << whole_number_4 << ".\n\n";


	const string studentName = "Kidus Tilahun";
	const int projectNumber = 1;
	const string dueDate = "9/19/2019";


	cout << "Thankyou for testing my program!!\n";
	cout << "PROGRAMMER: " << studentName << "\n";
	cout << "CMSC common project:" "" << projectNumber << "\n";
	cout << "Due Date: " << dueDate << "\n";

	cout << "\n";
	system("pause");
	return 0;
}

