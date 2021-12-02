#pragma once

enum SpotType
{
	COMPACT,
	LARGE,
	HANDICAPPED,
	MOTOCYCLE,
	ELECTRIC
};

class Spot
{
	const SpotType type;
public:
	Spot(SpotType t) : type(t)
	{
	}
};

