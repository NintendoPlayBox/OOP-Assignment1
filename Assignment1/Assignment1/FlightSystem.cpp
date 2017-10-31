#include "FlightSystem.h"
#include <iostream>
#include <string>
#include <vector>

FlightSystem::FlightSystem()
{
	
}

void FlightSystem::AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType, int groundspeed, int altitude, std::string gridReference, int heading)
{
		Aircraft::SetFlightNumber(flightNumber), 

	//newAircraft->SetFlightNumber(flightNumber);
	//newAircraft->SetAirline(airline);
	//newAircraft->SetAircraftType(aircraftType);
	//newAircraft->SetGroundSpeed(groundspeed);
	//newAircraft->SetAltitude(altitude);
	//newAircraft->SetGridReference(gridReference);
	//newAircraft->SetHeading(heading);

	//std::string flightNumber1 = newAircraft->GetFlightNumber();
	//std::string airline1 = newAircraft->GetAirline();
	//std::string aircraftType1 = newAircraft->GetAircraftType();
	//int groundspeed1 = newAircraft->GetGroundSpeed();
	//int altitude1 = newAircraft->GetAltitude();
	//std::string gridReference1 = newAircraft->GetGridReference();
	//int heading1 = newAircraft->GetHeading();


	//std::cout << flightNumber1 << " " << airline1 << " " << aircraftType1 << " " << groundspeed1 << " " << altitude1 << " " << gridReference1 << " " << heading1;
}

std::vector<Aircraft> FlightSystem::ListAllAircraft()
{
	return aircraftList_;
}

