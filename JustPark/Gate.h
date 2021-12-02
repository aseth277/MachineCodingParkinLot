#pragma once

#include "DBObject.h"
#include "Attendent.h"
#include "AutoExitPanel.h"
#include "Ticket.h"
#include "PaymentEnabled.h"
#include "IssuesTicket.h"

enum GateType
{
	ENTRANCE,
	EXIT,
	INACTIVE
};

class Gate : public DBObject , IPaymentEnabled, IIssuesTicket
{
private:
	long uid; // make this auto increment
	// auto increment;
	GateType type;
	string gateName;
	Attendent attendent;
	AutoExitPanel exitPanel;

public:
	Gate()
	{
		this->uid = DBObject().getUUID();
	}

	void open()
	{

	}

	void close()
	{

	}

	void getTicket()
	{

	}

	Ticket giveTicket()
	{

	}

	void processTicket(Ticket ticket)
	{

	}
};

