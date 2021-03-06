#include <iostream>
#include <string>
#include <vector>
#include "Aircraft.h"

#pragma once

class FlightSystem
{
public:
	FlightSystem();

	void AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType, 
		int groundspeed, int altitude, std::string gridReference, int heading);

	std::vector<Aircraft> ListAllAircraft();

	std::vector<std::string> ListAllCruisingAircraft();

	void RemoveAircraft(std::string flightNumber);

	void ChangeHeading(std::string flightNumber, int heading);

	int GetHeading(std::string flightNumber);

	void ChangeAltitude(std::string flightNumber, int altitude);

	int GetAltitude(std::string flightNumber);

	int NumAircraftinSector();

private:
	std::vector<Aircraft> aircraftList_;
};

