#include "stdafx.h"
#include "WineList.h"
#include <iostream>
using namespace std;

//Constructor for WineList
WineList::WineList()
{
	listSize = 0;
}

//Method used to check whether the object you want to add is in the list or not 
bool WineList::checkItem(string n, string t)
{
	int i;
	for (i = 0; i < listSize; i++)/* Loop to test whether the new wine I want to add
								  is in the list or not*/
	{
		if (iList[i].getName() == n && iList[i].getType() == t)/*Testing the wine's name and type
															   because you can have the same winery
															   produce several different types of wine*/
		{
			return true; /*Returns true if both constraints are met as it 
						   iterates through the objects*/ 
		}

	}
	return false;//Returns false if the object you're trying to add isn't found in the list
}

//Method to add wine to the list after it has been declared it doesn't exist already 
int WineList::addWineItem(WineItem &item)
{
	//adds new item to the list
	iList[listSize] = item;
		if (listSize < 99)//adds new object to the list only if the list isn't full
		{
			listSize++;
			return 0;
		}
		else
		{
			cout << "error occurred in addWineItem " << endl;
			return ERROR1;
		}
}

//Method used to display the list after you are through input objects
void WineList::displayList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << iList[i];
		cout << endl << endl;
	}
}
