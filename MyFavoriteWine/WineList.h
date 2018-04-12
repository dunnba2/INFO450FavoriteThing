#pragma once

#include "stdafx.h"
#include "WineItem.h"

class WineList
{
private:
	WineItem iList[100];
	int listSize;
public:
	WineList();
	int addWineItem();
	void displayList();
};

