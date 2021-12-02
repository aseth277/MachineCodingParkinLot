 #pragma once
#include "CustomerInfoPortal.h"
#include "EntrancePanel.h"
#include "DisplayBoard.h"
#include "Spot.h"

class Floor
{
	CustomerInfoPortal portal;
	List<Spot> spot;
};

class GroundFloor : public Floor
{
	EntrancePanel entrancePanel;
	DisplayBoard displayBoard;
};

