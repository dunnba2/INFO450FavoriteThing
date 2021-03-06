// MyFavoriteWine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WineItem.h"
#include "WineList.h"
#include <iostream>
#include <string>
using namespace std;

void welcome();

int main()
{
	WineList mylist; //creating the list for the program
	WineItem myitem; //can use this to add an item to the empty list before the loop if I want

	welcome();//displays welcome message for user before any input is executed

	char answer;

	//declaring the variables that will be used to construct new object
	string wineName;
	string wineType;
	string wineRegion;
	double alcoholContent;
	int rating;

	//Loop used to create new objects and add them to the list if valid
	do
	{ 
		cout << "Want to add a new wine? (Y for yes): ";
		cin >> answer;
		if(answer == 'Y' || answer == 'y')
		{ 
			cin.ignore();//used to clear the whitespace that was causing the next input to be skipped
			
			/*This asks for object variables so that you can pass them into
			the different functions before creating the object and adding it to the list*/ 
			cout << endl;
			cout << "Wine name: ";
			getline(cin, wineName);
			cout << "Wine type: ";
			getline(cin, wineType);
			cout << "Region: ";
			getline(cin, wineRegion);
			cout << "ABV: ";
			cin >> alcoholContent;
			cout << "Rating (1-10): ";
			cin >> rating;
		}

		/*This is where the object you want to create it tested, 
		if what you input matches an object already present in the list, 
		then it won't let you add it and you will be asked to try again.*/
		if (mylist.checkItem(wineName, wineType) == true)
		{
			cout << "This wine is already in the list." << endl;
		}
		/*Otherwise, the object info you provided doesn't match any other
		objects in the list so it creates and adds the object to the list*/
		else
		{
			WineItem myitem(wineName, wineType, wineRegion, alcoholContent, rating);
			mylist.addWineItem(myitem);
		}

		//This is where you choose if you want to continue adding wine or not
		cout << endl << "Would you like to add another wine to your list? ";
		cin >> answer;
		
	} while (answer == 'Y' || answer == 'y' );

	mylist.displayList();//displays the objects you created after you are finished adding to the list

	return 0;
}

void welcome() //Message that is displayed at the beginning of the program
{
	cout << "             ############## Welcome ###############" << endl << endl;
	cout << "    This program is for storing a list of your favorite wines." << endl;
	cout << "       You will be asked to provide the wine's name, type, " << endl;
	cout << "           region where it is from, ABV, and rating." << endl;
	cout << endl << endl;
}


