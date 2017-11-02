#include "FlightSystem.h"
#include <iostream>
#include <string>
#include <vector>

FlightSystem::FlightSystem()
{
	
}

void FlightSystem::AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType, int groundspeed, int altitude, std::string gridReference, int heading)
{
	Aircraft aircraft(flightNumber, airline, aircraftType, groundspeed, altitude, gridReference, heading);
	aircraftList_.push_back(aircraft);
}

std::vector<Aircraft> FlightSystem::ListAllAircraft()
{
	return aircraftList_;
}