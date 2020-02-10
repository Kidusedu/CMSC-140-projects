  /*
 * Class: CMSC140 CRN
 * Instructor: ahmed tarek
 * Project<3>
 * Due Date: 10/29/2019
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Kidus Tilahun
*/


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()

{

	// declare variables
	string location;
	int n, number_of_floors, rooms[30], singleRoom[10], doubleRoom[10], king[10], suite[10];

	//initailze the values for four different rooms
	int singleRRate = 60, doubleRRate = 75, kingRRate = 100, stroom = 150;
	int unoccupied, min;
	double totalRooms = 0, occupied_rooms = 0, income = 0.0, occupancy_rate;
	int sum = 0;

	cout << fixed << setprecision(2);
	cout << "====================================================\n";
	cout << right << setw(30) << "BlueMount Hotel\n";
	cout << "====================================================\n";

	//prompt and read the location where this hotel chain is located.
	cout << "Enter the Location of this hotel chain: ";
	getline(cin,location);

	//prompt and read the number of floors in the hotel.
	cout << "Enter total number of floors of the hotel: ";
	cin >> number_of_floors;

	//continuously ask for the correct floor number if it is not within the range of 1 and 5.
	while (number_of_floors <= 0 || number_of_floors > 5)

	{

		cout << "number of floors should be between 1 and 5 !! please try again.\n";
		cout << "\nEnter total number of floors of the hotel: ";
		cin >> number_of_floors;

	}

	// iterate a loop to read the total number of rooms for each floor.
	for (n = 1; n <= number_of_floors; n++)

	{

		cout << "\n\nEnter total number of rooms in the " << n << "th floor: ";
		cin >> rooms[n];

	

		// continuously ask for the correct number of rooms within the range of 1 and 30.
		while (rooms[n] <= 0 || rooms[n] > 30)

		{

			cout << "number of rooms should be between 1 and 30 !! please try again.\n\n";
			cout << "Enter total number of rooms in the " << n << "th floor : ";
			cin >> rooms[n];

		}

		//prompt and read the number of occupied rooms for each room type on this floor.
		cout << "How many SINGLE rooms are occupied in the " << n << "th floor : ";
		cin >> singleRoom[n];

		cout << "How many DOUBLE rooms are occupied in the " << n << "th floor : ";
		cin >> doubleRoom[n];

		cout << "How many KING rooms are occupied in the " << n << "th floor : ";
		cin >> king[n];

		cout << "How many SUITE rooms are occupied in the " << n << "th floor : ";
		cin >> suite[n];

		//check that the total number of occupied rooms on each floor
		sum = singleRoom[n] + doubleRoom[n] + king[n] + suite[n];

		

		//does not exceed the total of rooms on that floor.
		while (sum > rooms[n])

		{

			cout << "Total number of occupied rooms exceeds the total number of "<< "rooms on this floor. Please try again!!";

			sum = 0;

			cout << "\n\nEnter total number of rooms in the " << n << "th floor : ";
			cin >> rooms[n];

			while (rooms[n] <= 0 || rooms[n] > 30)

			{

				cout << "number of rooms should be between 1 and 30 !! please try again.\n\n";
				cout << "Enter total number of rooms in the " << n << "th floor : ";
				cin >> rooms[n];

			}

			cout << "How many SINGLE rooms are occupied in the " << n << "th floor : ";
			cin >> singleRoom[n];

			cout << "How many DOUBLE rooms are occupied in the " << n << "th floor : ";
			cin >> doubleRoom[n];

			cout << "How many KING rooms are occupied in the " << n << "th floor : ";
			cin >> king[n];

			cout << "How many SUITE rooms are occupied in the " << n << "th floor : ";
			cin >> suite[n];

			sum = singleRoom[n] + doubleRoom[n] + king[n] + suite[n];

		}

	}

	//print the information of the rates of room types

	cout << "\n\n=============================================================================\n";
	cout << right << setw(40) << "BlueMont Hotel located in " << location << endl << endl;
	cout << right << setw(47) << "TODAY'S ROOM RATES<US$/night>" << endl << endl;
	cout << right << setw(20) << "Single Room" << setw(20) << "Double Room" << setw(20)<< "King Room" << setw(20) << "Suite Room";
	cout << endl << endl;
	cout << right << setw(20) << singleRRate << setw(20) << doubleRRate << setw(20)<< kingRRate << setw(20) << stroom;
	cout << "\n================================================================================\n";

	for (n = 1; n <= number_of_floors; n++)

	{

		//calculate hotel income based on the room type and its rate.
		income = income + (singleRoom[n] * singleRRate) +

			(doubleRoom[n] * doubleRRate) + (king[n] * kingRRate) + (suite[n] * stroom);

		//The total number of rooms.
		totalRooms = totalRooms + rooms[n];

		//The total number of occupied rooms.
		occupied_rooms = occupied_rooms + singleRoom[n] + doubleRoom[n] + king[n] + suite[n];

	}

	//The total number of unoccupied rooms.
	unoccupied = totalRooms - occupied_rooms;

	//The rate of occupancy
	occupancy_rate = (occupied_rooms / totalRooms) * 100;

	// print the data
	cout << "\n" << right << setw(35) << "Hotel Income: " << right << setw(10) << "$" << income;
	cout << "\n" << right << setw(35) << "Total # of rooms: " << right << setw(10) << totalRooms;
	cout << "\n" << right << setw(35) << "Total # Occupied Rooms: " << right << setw(10) << occupied_rooms;
	cout << "\n" << right << setw(35) << "Total # Unoccupied Rooms: " << right << setw(10) << unoccupied;
	cout << "\n" << right << setw(35) << "Occupancy rate: " << right << setw(10) << occupancy_rate << "%";

	//find the Floor number with the minimum number of rooms.
	int r = 1;

	min = rooms[1];

	for (n = 2; n <= number_of_floors; n++)

	{

		if (rooms[n] < min)

		{

			min = n;
			r = n;

		}

	}

	// display as required
	cout << "\n\n" << r << "th Floor with " << rooms[r] << " rooms, has the least # of rooms.";

	//if the occupancy rate is less than 60%, then print a message.
	if (occupancy_rate < 60)

	{

		cout << "\nNeed to improve Hotel occupancy rate!!\n\n";

	}
	string name = "Kidus Tilahun";
	string date = "10/29/2019";
	int project_number = 3;


	cout << "\n\nThank you for testing my program!!";
	cout << "\nPROGRAMEER : "<<name;
	cout << "\nCMSC140 Common Project: "<<project_number;
	cout << "\nDue Date: "<<date<<endl<<endl;

	//system("pause");

	return 0;

}

