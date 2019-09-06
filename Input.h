#include <iostream>
using namespace::std;
#include <fstream>

#ifndef STRUCTS_H
#define STRUCTS_H
#include "structs.h"
#endif

#ifndef SIZE 
#define SIZE 50
#endif

Campus Campuses[SIZE];
int CampusIndex = 0;
Club Clubs[SIZE];
int ClubIndex = 0;
Faculty Faculties[SIZE];
int FacultyIndex = 0;
School Schooles[SIZE];
int SchoolIndex = 0;
Student Students[SIZE];
int StudentIndex = 0;
Lecturer Lecturers[SIZE];
int LecturesIndex = 0;
         
void SaveAllCampusInFile()
{
	ofstream coutFile;

	coutFile.open("Campus.txt", ios::out | ios::trunc);

	for(int i=0;i<CampusIndex;i++)
	{
		coutFile	<< Campuses[i].Name				<< endl 
					<< Campuses[i].Address			<< endl
					<< Campuses[i].Distance			<< endl
					; 
	}

	coutFile.close();
}

Campus InputCampus(Campus campus)
{
    cout << "Please Enter Campus Name: ";
    cin.ignore();
    cin.getline(campus.Name,SIZE);
    
    cout << "Please Enter Address: ";
    cin.getline(campus.Address,SIZE);
    
    cout << "Please Enter Distance In Km:";
    cin >> campus.Distance;
    
    Campuses[CampusIndex] = campus; 
    CampusIndex++;

	SaveAllCampusInFile();
    
    return campus;
}

void SaveAllClubInFile()
{
	ofstream coutfile;

	coutfile.open("Club.txt",ios::out | ios::trunc);

	for(int i=0;i<ClubIndex;i++)
	{
		coutfile << Clubs[i].Name	 << endl
				<< Clubs[i].Building << endl
				<< Clubs[i].Sports	 << endl
				<< Clubs[i].Number	 << endl;
	}
	coutfile.close();
}

Club InputClub(Club club)
{
    cout << "Please Enter Club Name: ";
    cin.ignore();
    cin.getline(club.Name,SIZE);
    
    cout << "Please Enter Name Of Building In Which Club Located: ";
    cin.getline(club.Building,SIZE);
    
    cout << "Please Enter Sports Which Club Offers: ";
    cin.getline(club.Sports,SIZE);
    
    cout << "Please Enter Club Phone Number: ";
	cin.getline(club.Number,SIZE);
    
    Clubs[ClubIndex] = club;
    ClubIndex++;

	SaveAllClubInFile();

    return club;     
}

void SaveAllFacultyInFile()
{
	ofstream coutfile;

	coutfile.open("Faculty.txt",ios::out | ios::trunc);
	for (int i = 0; i < FacultyIndex; i++)
	{
		coutfile << Faculties[i].Name	  << endl
				 << Faculties[i].Dean	  << endl
				 << Faculties[i].Building << endl
				 << Faculties[i].Campus	  << endl;
	}

	coutfile.close();
}

Faculty InputFaculty(Faculty faculty)
{
    cout << "Please Enter Faculty Name: ";
    cin.ignore();
    cin.getline(faculty.Name,SIZE);
    
    cout << "Please Enter Name Of Faculty Dean: ";
    cin.getline(faculty.Dean,SIZE);
    
    cout << "Please Enter Name Of Faculty Building: ";
    cin.getline(faculty.Building,SIZE);
    
    cout << "Please Enter Name Of Faculty Campus: ";
    cin.getline(faculty.Campus,SIZE);   
    
    Faculties[FacultyIndex] = faculty;
    FacultyIndex++;

	SaveAllFacultyInFile();
    
    return faculty; 
}

void SaveAllSchoolInFile()
{
	ofstream coutfile;
	coutfile.open("School.txt",ios::out | ios::trunc);

	for(int i=0;i<SchoolIndex;i++)
	{
		coutfile << Schooles[i].Name			<< endl
				 << Schooles[i].Building		<< endl
				 << Schooles[i].Programe		<< endl
				 << Schooles[i].ProgramTitle	<< endl
				 << Schooles[i].ProgramLevel	<< endl
				 << Schooles[i].ProgramDuration << endl
				 << Schooles[i].ProgramCode		<< endl;
	}
	coutfile.close();
}

School InputSchool(School school)
{
    cout << "Please Enter School Name: ";
    cin.ignore();
    cin.getline(school.Name,SIZE);
    
    cout << "Please Enter Name Of Building In Which School Located: ";
    cin.getline(school.Building,SIZE);
    
    cout << "Please Enter Name Of Program Which School Offer: ";
    cin.getline(school.Programe,SIZE);
    
    cout << "Please Enter School Program Code: ";
    //cin.ignore();
    cin.getline(school.ProgramCode,SIZE);
    
    cout << "Please Enter Program Title: ";
    ///cin.ignore();
    cin.getline(school.ProgramTitle,SIZE);
    
    cout << "Please Enter Program level: ";
    //cin.ignore();
    cin.getline(school.ProgramLevel,SIZE);
    
    cout << "Please Enter Duration Of Program: ";
    //cin.ignore();
    cin.getline(school.ProgramDuration,SIZE);
    
    Schooles[SchoolIndex] = school;
    SchoolIndex++; 

	SaveAllSchoolInFile();
    
    return school;   
}

void SaveAllStudentInFile()
{
	ofstream coutFile;

	coutFile.open("Students.txt", ios::out | ios::trunc);

	for(int i=0;i<StudentIndex;i++)
	{
		coutFile	<< Students[i].Name				<< endl 
					<< Students[i].Id				<< endl
					<< Students[i].Birthday.Day		<< endl
					<< Students[i].Birthday.Month	<< endl  
					<< Students[i].Birthday.Year	<< endl
					<< Students[i].EnrolledYear		<< endl; 
	}

	coutFile.close();
}

Student InputStudent(Student student)
{
    cout << "Please Enter Student Name: ";

    cin.ignore();
    cin.getline(student.Name,SIZE);
    
    cout << "Please Enter Student ID: ";
    //cin.ignore();
    cin.getline(student.Id,SIZE);
    
    cout << "Please Enter Birthday Of Student" << endl
         << "Enter Day First: ";
    //cin.ignore();
    cin  >> student.Birthday.Day;
    
    cout << "Enter Month: ";
    //cin.ignore();
    cin  >> student.Birthday.Month;
    
    cout << "Enter Year: ";
    //cin.ignore();
    cin  >> student.Birthday.Year;
    
    cout << "Please Enter Years In Which Student Enrolled: " ;
    //cin.ignore();
    cin  >> student.EnrolledYear;
    
    Students[StudentIndex] = student;
    StudentIndex++;

	SaveAllStudentInFile();
    
    return student; 
};

void SaveAllLecturerInFile()
{
	ofstream coutfile;
	coutfile.open("Lecturer.txt",ios::out | ios::trunc);

	for (int i = 0; i < LecturesIndex; i++)
	{
		coutfile << Lecturers[i].Name		<< endl
				 << Lecturers[i].Id			<< endl 
				 << Lecturers[i].Title		<<  endl
				 << Lecturers[i].OfficeRoom << endl;
	}
	coutfile.close();
}

Lecturer InputLecturer(Lecturer lecturer)
{
    cout << "Please Enter Lecturer Name: " ;
    cin.ignore();
    cin.getline(lecturer.Name,SIZE);
    
    cout << "Please Enter Lecturer Id: ";
    cin.getline(lecturer.Id,SIZE);
    
    cout << "Please Enter Lecturer Title: ";
    cin.getline(lecturer.Title,SIZE);
    
    cout << "Please Enter Lecturer Office Room: ";
    cin.getline(lecturer.OfficeRoom,SIZE);
    
    Lecturers[LecturesIndex] = lecturer;
    LecturesIndex++;

	SaveAllLecturerInFile();
    
    return lecturer;     
}


void LoadAllCampusFromFile()
{
	
	ifstream incampusfile;
	incampusfile.open("Campus.txt");
	char data[SIZE];
	Campus camp;
	if(incampusfile==NULL)
	{
		return ;
	}

	while (!incampusfile.eof())
	{
		//incampusfile.seekg(10,ios::beg),cut,end,;
		//incampusfile.tellg();
		//incampusfile.seekg(10,ios::cur);
		//incampusfile.

		incampusfile.read((char*) &camp,sizeof(camp));
		{

			cout<<camp.Name;
		}
		incampusfile.getline(camp.Name,SIZE);
		incampusfile.getline(camp.Address,SIZE);
		incampusfile.getline(data,SIZE);
		camp.Distance = atoi(data);
		Campuses[CampusIndex] = camp;
		CampusIndex++;
	}
}

void LoadAllClubFromFile()
{
	ifstream inclubfile;
	inclubfile.open("Club.txt");
	Club club;
	if(inclubfile==NULL)
	{
		return ;
	}

	while(!inclubfile.eof())
	{
		inclubfile.getline(club.Name,SIZE);
		inclubfile.getline(club.Building,SIZE);
		inclubfile.getline(club.Sports,SIZE);
		inclubfile.getline(club.Number,SIZE);
		}
}

void LoadAllFacultyFromFile()
{
	ifstream infacultyfile;
	Faculty faculty;
	infacultyfile.open("Faculty.txt");
	if (infacultyfile==NULL)
	{
		return ;
	}
	while(!infacultyfile.eof())
	{
	infacultyfile.getline(faculty.Name,SIZE);
	infacultyfile.getline(faculty.Dean,SIZE);
	infacultyfile.getline(faculty.Building,SIZE);
	infacultyfile.getline(faculty.Campus,SIZE);

	Faculties[FacultyIndex] = faculty;
	FacultyIndex++;
	}
}

void LoadAllSchoolFromFile()
{
	ifstream inschoolfile;
	inschoolfile.open("School.txt");
	School school;
	if (inschoolfile==NULL)
	{
		return ;
	}

	while(!inschoolfile.eof())
	{
		inschoolfile.getline(school.Name,SIZE);
		inschoolfile.getline(school.Building,SIZE);
		inschoolfile.getline(school.Programe,SIZE);
		inschoolfile.getline(school.ProgramTitle,SIZE);
		inschoolfile.getline(school.ProgramLevel,SIZE);
		inschoolfile.getline(school.ProgramDuration,SIZE);
		inschoolfile.getline(school.ProgramCode,SIZE);

		Schooles[SchoolIndex] = school;
		SchoolIndex++;
	}
}

void LoadAllStudentsFromFile()
{
	ifstream instudentfile;
	instudentfile.open("Students.txt");
	Student student;
	char data[SIZE];
	if (instudentfile==NULL)
	{
		return ;
	}

	while (!instudentfile.eof())
	{
		instudentfile.getline(student.Name,SIZE);
		instudentfile.getline(student.Id,SIZE);
		instudentfile.getline(data,SIZE);
		student.Birthday.Day = atoi(data);
		student.Birthday.Month = atoi(data);
		student.Birthday.Year = atoi(data);
		instudentfile.getline(data,SIZE);
		student.EnrolledYear = atoi(data);
		Students[StudentIndex] = student;
		StudentIndex++;
	}
}

void LoadAllLecturerFromFile()
{
	ifstream inlecturefile;
	inlecturefile.open("Lecturer.txt");
	Lecturer lecturer;
	if (inlecturefile==NULL)
	{
		return ;
	}

	while (!inlecturefile.eof())
	{
		inlecturefile.getline(lecturer.Name,SIZE);
		inlecturefile.getline(lecturer.Id,SIZE);
		inlecturefile.getline(lecturer.Title,SIZE);
		inlecturefile.getline(lecturer.OfficeRoom,SIZE);
		Lecturers[LecturesIndex] = lecturer;
		LecturesIndex++;
	}
}

