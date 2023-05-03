#pragma once
#include <string>
#include <iostream>


namespace TransportOfRace
{

	class  Transport
	{
	protected:
		std::string transportName_ = "Дефолт имя"; 
		bool transportReg_ = false; 
		int transportSpeed_ = 0; 
		int transportDrivingTimeBeforeRest_ = 0; 
		int transportDurationOfRest1_ = 0; 
		float transportDurationOfRest2_ = 0; 
		int transportDurationOfRestLast_ = 0; 
		int transportDistanceReductionCoefficient_ = 0; 
		float racePassingTimeAll_ = 0; 
		int transportNumber_ = 0; 
		int countOfRest_ = 0; 
		float restTime_ = 0; 
		float timeDriving_ = 0; 
		float peaceOfDis_ = 0; 
		float newAirDistance = 0;

	public:

		float raceAirPassingTimeAll(TransportOfRace::Transport* MassiveOfRacers, float raceDistance);
		float racePassingTimeAll(TransportOfRace::Transport* MassiveOfRacers, float raceDistance);
		float getRacePassingTimeAll();
		int getTransportNumber();

		std::string getTransportName();

		void setTransportReg(bool transportReg);
		bool getTransportReg();

		
	};
};