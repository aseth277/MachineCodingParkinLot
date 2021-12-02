#pragma once
#include "PaymentEnabled.h"
#include "Electronics.h"

class CustomerInfoPortal : public IPaymentEnabled, Electronics
{
	void processTicket(Ticket ticket)
	{

	}
};

