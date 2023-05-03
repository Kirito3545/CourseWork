#pragma once
#include "Transport.h"


namespace TransportOfRace
{
	class  AirTransportCarpetPlane : public TransportOfRace::Transport
	{
	public:
		AirTransportCarpetPlane();
	};

	class  AirTransportEagle : public TransportOfRace::Transport
	{
	public:
		AirTransportEagle();
	};

	class  AirTransportBroomstick : public TransportOfRace::Transport
	{
	public:
		AirTransportBroomstick();
	};
}