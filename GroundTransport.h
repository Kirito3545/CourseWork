#pragma once
#include "Transport.h"

namespace TransportOfRace
{
	class  GroundTransportCamel : public TransportOfRace::Transport
	{
	public:
		GroundTransportCamel();
	};

	class  GroundTransportCamelFast : public TransportOfRace::Transport
	{
	public:
		GroundTransportCamelFast();
	};

	class  GroundTransportCentaur : public TransportOfRace::GroundTransportCamel
	{
	public:
		GroundTransportCentaur();
	};

	class  GroundTransportAllterrainBoots : public TransportOfRace::GroundTransportCamel
	{
	public:
		GroundTransportAllterrainBoots();
	};
}