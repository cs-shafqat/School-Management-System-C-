#include <iostream>
#include<conio.h>
using namespace::std;
#include "Input.h"
#include "Output.h"
#include "Switch.h"
#ifndef SEARCH_H
#define SEARCH_H
#include "Search.h"
#endif


#ifndef STRUCTS_H
#define STRUCTS_H
#include "Structs.h"
#endif

void DataLoad()
{
	LoadAllCampusFromFile();
	LoadAllClubFromFile();
	LoadAllFacultyFromFile();
	LoadAllSchoolFromFile();
	LoadAllStudentsFromFile();
	LoadAllLecturerFromFile();
}

int main()
{
	int choice;
	system("CLS");
	DataLoad();

	do{
		system("CLS");              
		choice =  MainMenu();
		switch(choice)
		{
			case 1:
				InputSwitch();	
				break;
			case 2:
				OutputSwitch();
				break;   
			case 3:
				SearchSwitch();
				break;	
			case 4:
				return 0;
			default:
				cout << "Invalid Entry" << endl
					<< "Press Enter To Go Back: ";
				getch();	   			    	
		}

	}while(choice != 4);

	
	return 0;
}
