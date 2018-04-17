#pragma once
#include "stdafx.h"
#include "WineItem.h"

//WineList class
class WineList
{
	//declares private member variables of the WineList class
private:
	WineItem iList[100];
	int listSize;
	//declares constructors and methods used for WineList class
public:
	WineList();
	bool checkItem(string n, string t);
	int addWineItem(WineItem &item);
	void displayList();
};

