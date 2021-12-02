#pragma once
#include "Ticket.h"

__interface IPaymentEnabled
{
public:
	virtual void processTicket(Ticket ticket) = 0;
};

