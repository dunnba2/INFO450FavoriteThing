#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int ERROR1 = 330;

//created a class
class WineItem
{
	//declaring private member variables for WineItem class
private:
	string wineName;
	string wineType;
	string wineRegion;
	double alcoholContent;
	int rating;

	//Declaring constructors and methods that can be used 
public:
	WineItem();
	~WineItem();
	string getType();
	string getName();
	WineItem(string n, string t, string r, double a, int x);
	int getWineItem();

	//friend function used to display objects 
	friend ostream & operator<<(ostream &os, const WineItem &item);
};

