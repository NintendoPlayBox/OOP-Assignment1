#include <iostream>
#include <string>
#include <vector>
#pragma once

class Aircraft
{
public:
	Aircraft();

	Aircraft(std::string flightNumber, std::string airline, std::string aircraftType,
		int groundspeed, int altitude, std::string gridReference, int heading);

	void SetFlightNumber(std::string flightNumber);

	std::string GetFlightNumber();
	void SetAirline(std::string airline);
	std::string GetAirline();

	void SetAircraftType(std::string aircraftType);

	std::string GetAircraftType();

	void SetGroundSpeed(int groundSpeed);

	int GetGroundSpeed();

	void SetAltitude(int altitude);

	int GetAltitude();

	void SetGridReference(std::string gridReference);

	std::string GetGridReference();

	void SetHeading(int heading);

	int GetHeading();

private:

	std::string flightNumber_;

	std::string airline_;

	std::string aircraftType_;

	int groundSpeed_;

	int altitude_;

	std::string gridReference_;

	int heading_;
};