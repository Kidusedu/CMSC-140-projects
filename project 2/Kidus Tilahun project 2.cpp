
/*
 * Class: CMSC140 CRN:20136
 * Instructor: Dr.Ahmed Tarek
 * Project<2>
 * Description: this program is a converter that converts units from metric system
				 of measurment to imperial system of measurment.
 * Due Date:08/10/19
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Kidus Tilahun

*/








#include <iostream>
#include <string>
using namespace std;

int main()
{
	string country_name;  // name of country

	cout << " Enter a country name : ";
	getline(cin, country_name);// name of country inserted by user
	cout << endl;

	// converter tool kit displayed

	cout << " Converter Toolkit\n";
	cout << " _________________\n";

	cout << " 1. Temprature converter\n";
	cout << " 2. Distance converter\n";
	cout << " 3. Weight converter\n";
	cout << " 4. Quit\n\n";

	int choice_number;     // number inserted by user to toggle type of converter
	cout << " Enter your choice (1-4): ";
	cin >> choice_number;     


	if (choice_number == 1)    // if number inserted is equal to 1
	{


		cout << " please enter temprature in celsius (such as 24): ";

		int temprature_c;     //temprature in celsius
		cin >> temprature_c;  // user inserts temprature

		

		int temprature_f;     //temprature in fahrenite (temprature displayed)
		temprature_f =(temprature_c * 9/5) + 32; // temprature calculation

		cout << " it is " << temprature_f << " in fahrenheit.\n\n"; //temprature in fahrenite


		cout << " " << country_name << " sounds fun!\n\n"; //"country sounds fun" displayed

		//Name of programmer , project number, due date displayed
		string programmer_name = "Kidus Tilahun";  
		int project_number = 2;
		string due_date = "10/8/2019";


		cout << " Thank you for testing my program!!\n";
		cout << " PROGRAMMER: " << programmer_name;
		cout << " CMSC 140 Common Project " << project_number << endl;
		cout << " Due Date: " << due_date << endl << endl;

	}


	else if (choice_number == 2)    // if number inserted is equl to 2
	{
		cout << " please enter distance in Kilometers (such as 18.54): ";

		float distance_input; // distance in kilometers (distance inserted by user)
		float distance_output; // distance in miles (distance displaed)
		cin >> distance_input; // user inserts distance
		
		if (distance_input < 0)      // if distance input is less than 0
		{
			//Error message
			cout << " !!!ERROR!!! Program can not calculate negative distance\n\n"; 

			cout << " " << country_name << " sounds fun!\n\n"; //"country sounds fun" displayed

			//Name of programmer , project number, due date dsiplayed
			string programmer_name = "Kidus Tilahun";
			int project_number = 2;
			string due_date = "10/8/2019";


			cout << " Thank you for testing my program!!\n";
			cout << " PROGRAMMER: " << programmer_name <<endl;
			cout << " CMSC 140 Common Project " << project_number << endl;
			cout << " Due Date: " << due_date << endl << endl;

			system("pause");
			return 0; 

		}
		
		distance_output = distance_input * 0.6; // distance calculation

		cout << " it is " << distance_output << " in miles.\n\n"; // distance displayed

		cout << " " << country_name << " sounds fun!\n\n"; //"country sounds fun" displayed

		//Name of programmer , project number, due date
		string programmer_name = "Kidus Tilahun";
		int project_number = 2;
		string due_date = "10/8/2019";


		cout << " Thank you for testing my program!!\n";
		cout << " PROGRAMMER: " << programmer_name<<endl;
		cout << " CMSC 140 Common Project " << project_number << endl;
		cout << " Due Date: " << due_date << endl << endl;

	}



	else if (choice_number == 3)        // if number inserted is equl to 3
	{
		cout << " please enter weight in kilograms: ";

		long float weight_input; 
		cin >> weight_input;     //weight inserted by user

		if (weight_input < 0)  // if weight input is less than 0
		{
			cout << " !!!ERROR!!! Program can not calculate negative weight\n\n";


			cout << " " << country_name << " sounds fun!\n\n";   //"country sounds fun" displayed

			//Name of programmer , project number, due date
			string programmer_name = "Kidus Tilahun";
			int project_number = 2;
			string due_date = "10/8/2019";


			cout << " Thank you for testing my program!!\n";
			cout << " PROGRAMMER: " << programmer_name<<endl;
			cout << " CMSC 140 Common Project " << project_number << endl;
			cout << " Due Date: " << due_date << endl << endl;

			system("pause");
			return 0;
		}

		float weight_output;  //weight displayed
		weight_output = weight_input * 2.2; //weight calculation

		cout << " it is " << weight_output << " in pounds.\n\n"; // weight displayed

		cout << " " << country_name << " sounds fun!\n\n";   //"country sounds fun" displayed

		//Name of programmer , project number, due date
		string programmer_name = "Kidus Tilahun";
		int project_number = 2;
		string due_date = "10/8/2019";


		cout << " Thank you for testing my program!!\n";
		cout << " PROGRAMMER: " << programmer_name<<endl;
		cout << " CMSC 140 Common Project " << project_number << endl;
		cout << " Due Date: " << due_date << endl << endl;

		system("pause");
		return 0;
	}



	else if (choice_number == 4)         // if number inserted is equal to 4
	{
	    
		cout <<" Quit\n"<< endl; // display quit 

		cout << " " << country_name << " sounds fun!\n\n"; //"country sounds fun" displayed

		//Name of programmer , project number, due date
		string programmer_name = "Kidus Tilahun";
		int project_number = 2;
		string due_date = "10/8/2019";


		cout << " Thank you for testing my program!!\n";
		cout << " PROGRAMMER: " << programmer_name << endl;
		cout << " CMSC 140 Common Project " << project_number << endl;
		cout << " Due Date: " << due_date << endl << endl;

		system("pause");
		return 0;



	}

	else   // if number inserted is other than numbers from 1-4

	        //Error message
		cout << " !!!Error!!!  please insert numbers 1-4\n" << endl;  


		cout << " " << country_name << " sounds fun!\n\n";    //"country sounds fun" displayed

		//Name of programmer , project number, due date
		string programmer_name = "Kidus Tilahun";  
		int project_number = 2;
		string due_date = "10/8/2019";


		cout << " Thank you for testing my program!!\n";
		cout << " PROGRAMMER: " << programmer_name << endl;
		cout << " CMSC 140 Common Project " << project_number << endl;
		cout << " Due Date: " << due_date << endl << endl;


		system("pause");
		return 0;


}