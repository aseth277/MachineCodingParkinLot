#pragma once
#include <ctime> 

enum TicketStatus
{
	ACTIVE,
	PAID,
	CANCELLED
};

class Ticket
{
	time_t issued;
	TicketStatus status;
};

