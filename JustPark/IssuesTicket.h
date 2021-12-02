#pragma once
#include "Ticket.h"

__interface IIssuesTicket
{
public:
	virtual Ticket giveTicket() = 0;
};

