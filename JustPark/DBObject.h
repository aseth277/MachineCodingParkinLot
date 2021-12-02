#pragma once
namespace
{
	static long NEW_UUID;
}

class DBObject
{
private:
	long uuid;

public:
	DBObject()
	{
		this->uuid = NEW_UUID++;
	}

	long getUUID()
	{
		return uuid;
	}
};

