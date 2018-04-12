#include "stdafx.h"
#include "WineList.h"
#include <iostream>
using namespace std;

WineList::WineList()
{
	listSize = 0;
}

int WineList::addWineItem()
{
	if (iList[listSize].getWineItem() == 0)//this says if code runs smooth and returns a 0
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

void WineList::displayList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << iList[i];
		cout << endl << endl;
	}
}
