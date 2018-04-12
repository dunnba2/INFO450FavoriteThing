#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int ERROR1 = 330;

//created a class
class WineItem
{
private:
	string itemName;
	string itemType;
	string itemRegion;
	double alcoholContent;
	int rating;

public:
	WineItem();
	~WineItem();
	int getWineItem();

	friend ostream & operator<<(ostream &os, const WineItem &item);
};

