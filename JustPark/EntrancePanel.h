#pragma once
#include "DBObject.h"
#include "HasDisplay.h"
#include "Electronics.h"

class EntrancePanel : public IIssuesTicket, Electronics
{
public:
	void DisplayMessage(string message)
	{

	}

	Ticket giveTicket()
	{

	}
};

