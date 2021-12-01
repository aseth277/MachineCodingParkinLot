#pragma once

enum VehichleType
{
	CAR,
	TRUCK,
	VAN,
	MOTORCYCLE,
	ELECTRIC
};

class Vehicle
{
protected:
	Vehicle(VehichleType type)
	{
		this->type = type;
	}
private:
	string plateNumber;
	string color;
	VehichleType type;
};

