/*
*Flight Control Simulation
*
*Version: 1.0
*
*Author: Patrick Mc Namee
*
*Date:23/10/2017
*
*Copyright 2017
*/

#include "Aircraft.h"
#include "FlightSystem.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	//initialise variables
	string input;
	//user introduction
	cout << "Welcome to the Flight Control System \n \n" << "To add a Aircraft to the system, enter A \n" 
		<< "To remove an Aircraft, enter R \n" << "To edit a previously added Aircraft, enter E \n" << endl;

	//test
	/*Aircraft aircraft1;
	
	aircraft1.Aircraft::SetHeading(180);

	aircraft1.Aircraft::GetHeading();*/

	//ask for initial input

	//get user input
	cin >> input;

	//convert to lower
	transform(input.begin(), input.end(), input.begin(), ::tolower);

	//do while loop for retrying input in case of error
	while (input != "a" && input != "r" && input != "e")
	{
		//print error message
		cout << "You have not entered valid data, please try again. 'A' to add Aircraft, 'R' to remove Aircraft or 'E' to edit Aircraft" << endl;
		//get user input
		cin >> input;
		//convert to upper
		transform(input.begin(), input.end(), input.begin(), ::tolower);
	}
	//use input to run methods
	
	if (input == "a")
	{

		Aircraft *newAircraft;
		newAircraft = new Aircraft();

		////get user input for parameters
		//std::cout << "Enter the details of the new Aircraft" << std::endl;
		//std::cout << "Enter Flight Number:" << std::endl;
		//std::cin >> flightNumber;
		//std::cout << "Enter Airline Name:" << std::endl;
		//std::cin >> airline;
		//std::cout << "Enter Aircraft Type:" << std::endl;
		//std::cin >> aircraftType;
		//std::cout << "Enter Groundspeed:" << std::endl;
		//std::cin >> groundspeed;
		//std::cout << "Enter Altitude" << std::endl;
		//std::cin >> altitude;
		//std::cout << "Enter Grid Reference" << std::endl;
		//std::cin >> gridReference;
		//std::cout << "Enter Heading:" << std::endl;
		//std::cin >> heading;

		cout << "a";
	}

	if (input == "r")
	{
		cout << "r";
	}

	if (input == "E")
	{
		cout << "E";
	}

	//pause
	system("pause");

	return 0;
}