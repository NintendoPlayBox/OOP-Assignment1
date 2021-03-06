#include "Aircraft.h"
#include <iostream>
#include <vector>
#include <string>


Aircraft::Aircraft(flightNumber)
{
	flightNumber_{flightnumber}
}

void Aircraft::SetFlightNumber(std::string flightNumber) 
{
	flightNumber_ = flightNumber;
}

std::string Aircraft::GetFlightNumber() 
{
	return flightNumber_;
}


void Aircraft::SetAirline(std::string airline) 
{
	airline_ = airline;
}

std::string Aircraft::GetAirline() 
{
	return airline_;
}


void Aircraft::SetAircraftType(std::string aircraftType) 
{
	aircraftType_ = aircraftType;
}

std::string Aircraft::GetAircraftType() 
{
	return aircraftType_;
}


void Aircraft::SetGroundSpeed(int groundSpeed) 
{
	groundSpeed_ = groundSpeed;
}

int Aircraft::GetGroundSpeed()
{
	return groundSpeed_;
}


void Aircraft::SetAltitude(int altitude) 
{
	altitude_ = altitude;
}

int Aircraft::GetAltitude()
{
	return altitude_;
}


void Aircraft::SetGridReference(std::string gridReference)
{
	gridReference_ = gridReference;
}

std::string Aircraft::GetGridReference()
{
	return gridReference_;
}


void Aircraft::SetHeading(int heading) 
{
	heading_ = heading;
}

int Aircraft::GetHeading() 
{
	return heading_;
}