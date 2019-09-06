#include<conio.h>

int MainMenu()
{
	int Mainchoice;
	system("CLS");
	cout << "1.Input Menu" 		<< endl
		 << "2.Print Menu" 		<< endl
		 << "3.Searching Menu"  << endl
		 << "4.Exit"            << endl
	     << "Please Enter Your Choice: ";
     cin >> Mainchoice;
     return Mainchoice;   ;		 		
}

int InputMenu()
{
	int InputChoice;
    system("CLS");
    cout << "1.Input Campus Information: "     << endl
         << "2.Input Club Information: "       << endl
         << "3.Input Faculty Information: "    << endl
         << "4.Input School Information: "     << endl
         << "5.Input Student Information: "    << endl
         << "6.Input Lecturer Information: "   << endl
         << "7.Go To Main Menu: "              << endl
         << "Please Enter Your Choice: ";
     cin >> InputChoice;
     return InputChoice;    
}

int PrintMenu()
{
	int PrintChoice;
	system("CLS");
    cout << "1.Print All Campus"       << endl
         << "2.Print All Clubs"        << endl
         << "3.Print All Faculties"    << endl
         << "4.Print All Schools"     << endl
         << "5.Print All Students"    << endl
         << "6.Print All Lecturer"    << endl
         << "7.Go To Main Menu: "                   << endl
         << "Please Enter Your Choice: ";
     cin >> PrintChoice;
     return PrintChoice;
 
}

int SearchingMenu()
{
	 int SearchChoice;
	 system("CLS");
     cout << "1.Search In Campus Menu: "   << endl
          << "2.Search In Club Menu "      << endl
          << "3.Search In Faculty Menu "   << endl
          << "4.Search In School Menu "    << endl
          << "5.Search In Student Menu "   << endl
          << "6.Search In Lecturer Menu"   << endl
    	  << "7.Go To Main Menu: "         << endl
          << "Please Enter Your Choice: ";
      cin >> SearchChoice;
      return SearchChoice;		
}


void PrintCampus(Campus campus)
{
      
     cout  << "Campus Name: "      << campus.Name         << endl
           << "Campus Address: "   << campus.Address      << endl
           << "Campus Distance: "  << campus.Distance;
}

void PrintAllCampus()
{
     for(int i=0;i<CampusIndex;i++)
     {
          system("cls");
          PrintCampus(Campuses[i]);
          cout << endl << "Press Any Key To Print Next Campus";
          getch();
     }
}

void PrintClub(Club club)
{
     cout << endl << endl << endl  << endl             << endl
          << "Club Name: "         << club.Name        << endl 
          << "Club Building: "     <<club.Building     << endl
          << "Club Sports: "       <<club.Sports       << endl
          << "Club Phone Number: " <<club.Number       << endl;
}

void PrintAllClub()
{
     for(int i=0;i<ClubIndex;i++)
     {
          system("CLS");   
          PrintClub(Clubs[i]);
          cout << endl << "Press Any Key To Print Next Club" << endl;
          getch();
     }
}

void PrintFaculty(Faculty faculty)
{
    cout << endl << endl << endl << endl                  << endl
         << "Faculty Name: "     << faculty.Name          << endl
         << "Faculty Dean: "     << faculty.Dean          << endl
         << "Faculty Building: " << faculty.Building      << endl
         << "Faculty Campus: "   << faculty.Campus        << endl;
}

void PrintAllFaculty()
{
     for(int i=0;i<FacultyIndex;i++)
     {
          system("CLS");   
          PrintFaculty(Faculties[i]);
          cout << endl << "Press Any Key To Print Next Faculty" << endl;
          getch();
     }
}

void PrintSchool(School school)
{
    cout << endl << endl << endl << endl                           << endl
         << "School Name: "             << school.Name             << endl
         << "School Building: "         <<school.Building          << endl
         << "School Program: "          <<school.Programe          << endl
         << "School Program Code: "     <<school.ProgramCode       << endl
         << "School Program Title: "    <<school.ProgramTitle      << endl
         << "School Program Level: "    <<school.ProgramLevel      << endl
         << "Schoo; Program Duration: " <<school.ProgramDuration ;
};

void PrintAllSchooles()
{
     for(int i=0;i<SchoolIndex;i++)
     {
          system("CLS");   
          PrintSchool(Schooles[i]);
          cout << endl << "Press Any Key To Print Next School" << endl;
          getch();
     }
}


void PrintStudent(Student student)
{
    cout << endl << endl << endl << endl                           << endl
         << "Student Name: "             << student.Name           << endl 
         << "Student Id: "               << student.Id             << endl
         << "Student Birthday: "         << student.Birthday.Day   << "-"
         <<  student.Birthday.Month      << "-"  
         <<  student.Birthday.Year                                 << endl
         << "Student Enrolled Year: " << student.EnrolledYear      << endl; 
};

void PrintAllStudent()
{
     for(int i=0;i<StudentIndex;i++)
     {
          system("CLS");   
          PrintStudent(Students[i]);
          cout << endl << "Press Any Key To Print Next Student" << endl;
          getch();
     }
}

void PrintLecturer(Lecturer lecturer)
{
    cout << endl << endl << endl << endl                    << endl
         <<  "Lecturer Name: "        <<lecturer.Name       << endl
         <<  "Lecturer Id: "          <<lecturer.Id         << endl
         <<  "Lecturer Title: "       <<lecturer.Title      << endl
         <<  "Lecturer Office Room: " <<lecturer.OfficeRoom << endl;
}

void PrintAllLecturer()
{
     for(int i=0;i<LecturesIndex;i++)
     {
          system("CLS");   
          PrintLecturer(Lecturers[i]);
          cout << endl << "Press Any Key To Print Next Lecturer" << endl;
          getch();
     }
}

