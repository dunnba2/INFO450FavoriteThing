// MyFavoriteWine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WineItem.h"
#include "WineList.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{

	WineList mylist;
	mylist.addWineItem();
	mylist.addWineItem();
	mylist.displayList();

	WineItem myitem;
	if (myitem.getWineItem() == ERROR1)
	{
		cout << "error found. cannot get object" << endl;
	}
	else
	{
		cout << myitem;
	}

	WineItem myitem2;
	if (myitem2.getWineItem() == ERROR1)
	{
		cout << "error found. cannot get object" << endl;
	}
	else
	{
		cout << myitem2;
	}



	return 0;
}


