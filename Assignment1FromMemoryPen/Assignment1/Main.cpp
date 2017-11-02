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
	//initialise 
	string input, flightNumber, airline, aircraftType, gridReference;
	int groundspeed, altitude, heading;
	FlightSystem FlightSystem;
	
	//ME
	//user introduction
	cout << "Welcome to the Flight Control System \n \n" << "To add a Aircraft to the system, enter A \n" 
		<< "To remove an Aircraft, enter R \n" << "To edit a previously added Aircraft, enter E \n" 
		<< "To return a list of all Aircraft, Enter L \n" << "To exit the system, enter X \n" << endl;

	//get user input
	cin >> input;

	//convert to lower
	transform(input.begin(), input.end(), input.begin(), ::tolower);

	//do while loop for retrying input in case of error
	while (input != "a" && input != "r" && input != "e" && input != "x" && input != "l")
	{
		//print error message
		//ADD NEW OPTIONS AS THEY ARE ADDED
		cout << "You have not entered valid data, please try again. 'A' to add Aircraft, 'R' to remove Aircraft or 'E' to edit Aircraft" << endl;
		//get user input
		cin >> input;
		//convert to upper
		transform(input.begin(), input.end(), input.begin(), ::tolower);
	}
	//use input to run methods
	
	if (input == "a")
	{
		//get user input for parameters
		std::cout << "Enter the details of the new Aircraft" << std::endl;
		std::cout << "Enter Flight Number:" << std::endl;
		std::cin >> flightNumber;
		std::cout << "Enter Airline Name:" << std::endl;
		std::cin >> airline;
		std::cout << "Enter Aircraft Type:" << std::endl;
		std::cin >> aircraftType;
		std::cout << "Enter Groundspeed:" << std::endl;
		std::cin >> groundspeed;
		std::cout << "Enter Altitude" << std::endl;
		std::cin >> altitude;
		std::cout << "Enter Grid Reference" << std::endl;
		std::cin >> gridReference;
		std::cout << "Enter Heading:" << std::endl;
		std::cin >> heading;

		FlightSystem.AddAircraft(flightNumber, airline, aircraftType, groundspeed, altitude, gridReference, heading);

		//confirm user has entered aircraft
		std::cout << "Aircraft Added" << std::endl;
		
		
		cout << "a";
	}

	if (input == "r")
	{
		cout << "r";
	}

	if (input == "e")
	{
		cout << "e";
	}

	if (input == "l")
	{
		//return vector containing all aircraft
		vector<Aircraft> localFlightList = FlightSystem.ListAllAircraft();

		for (int i = 0; i < localFlightList.size(); i++)
		{
			flightNumber = localFlightList[i].GetFlightNumber();
			std::cout << flightNumber << std::endl;

			airline = localFlightList[i].GetAirline();
			std::cout << airline << std::endl;

			aircraftType = localFlightList[i].GetAircraftType();
			std::cout << aircraftType << std::endl;

			groundspeed = localFlightList[i].GetGroundSpeed();
			std::cout << groundspeed << std::endl;

			altitude = localFlightList[i].GetAltitude();
			std::cout << altitude << std::endl;

			gridReference = localFlightList[i].GetGridReference();
			std::cout << gridReference << std::endl;

			heading = localFlightList[i].GetHeading();
			std::cout << heading << std::endl;
		}


		cout << "l";
	}

	if (input == "x")
	{
		cout << "x";
		return 0;
	}

	//pause
	system("pause");

	return 0;
}