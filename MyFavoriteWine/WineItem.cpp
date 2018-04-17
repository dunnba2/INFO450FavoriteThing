#include "stdafx.h"
#include "WineItem.h"

//constructor for WineItem class
WineItem::WineItem()
{
	wineName = "";
	wineType = "";
	wineRegion = "";
	alcoholContent = 0;
	rating = 0;
}

//destructor for WineItem class
WineItem::~WineItem()
{
	cout << endl << "destroying..." << endl;
}


//Constructor to be used when creating a new object for the list
WineItem::WineItem(string n, string t, string r, double a, int x)
{
	wineName = n;
	wineType = t;
	wineRegion = r;
	alcoholContent = a;
	rating = x;
}

//method to retreive the name to test against other objects of the list
string WineItem::getName()
{
	return wineName;
}

//method to retreive the type of wine to test against other objects of the list
string WineItem::getType()
{
	return wineType;
}

int WineItem::getWineItem()
{
	cout << "Name? ";
	getline(cin, wineName);
	cout << "Type? ";
	getline(cin, wineType);
	cout << "Region? ";
	getline(cin, wineRegion);
	cout << "Alcohol Content? ";
	cin >> alcoholContent;
	if (!cin.good())
	{
		cout << "failure to read alcohol content." << endl;
		cin.clear();// clears the bad input value
		cin.ignore(256, '\n');
		return ERROR1;
	}
	cout << "Rating? (1-10) ";
	cin >> rating;
	if (!cin.good())
	{
		cout << "failure to read rating." << endl;
		cin.clear();// clears the bad input value
		cin.ignore(256, '\n');
		return ERROR1;
	}
	cin.clear();
	cin.ignore();
	return 0; // success!!
}

//friend function that will display the objects of the list after you are through entering new objects
ostream & operator<<(ostream &os, const WineItem &item)
{
	os << endl;
	os << "  **** Wine ****" << endl;
	os << "  Name: " << item.wineName << endl;
	os << "  Type: " << item.wineType << endl;
	os << "  Region: " << item.wineRegion << endl;
	os << "  Alcohol Content: " << item.alcoholContent << "%" << endl;
	os << "  Rating: " << item.rating;
	return os;
}

