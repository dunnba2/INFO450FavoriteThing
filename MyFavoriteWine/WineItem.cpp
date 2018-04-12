#include "stdafx.h"
#include "WineItem.h"

WineItem::WineItem()
{
	itemName = "";
	itemType = "";
	itemRegion = "";
	alcoholContent = 0;
	rating = 0;
}

WineItem::~WineItem()
{
	cout << "in destructor" << endl;
}

int WineItem::getWineItem()
{
	cout << "Name? ";
	getline(cin, itemName);
	cout << "Type? ";
	getline(cin, itemType);
	cout << "Region? ";
	getline(cin, itemRegion);
	cout << "Alcohol Content? ";
	cin >> alcoholContent;
	if (!cin.good())
	{
		cout << "failure to read cost." << endl;
		cin.clear();// clears the bad input value
		cin.ignore(256, '\n');
		return ERROR1;
	}
	cout << "Rating? (1-10) ";
	cin >> rating;
	if (!cin.good())
	{
		cout << "failure to read cost." << endl;
		cin.clear();// clears the bad input value
		cin.ignore(256, '\n');
		return ERROR1;
	}
	cin.clear();
	cin.ignore();
	return 0; // success!!
}

ostream & operator<<(ostream &os, const WineItem &item)
{
	os << "**** Wine ****" << endl;
	os << "Name: " << item.itemName << endl;
	os << "Type: " << item.itemType << endl;
	os << "Region: " << item.itemRegion << endl;
	os << "Alcohol Content: " << item.alcoholContent << "%" << endl;
	os << "Rating: " << item.rating << endl;
	return os;
}

