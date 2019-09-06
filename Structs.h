#ifndef SIZE 
#define SIZE 50
#endif

struct Campus
{
     char Name[SIZE],
          Address[SIZE];
     int  Distance;
};

struct Club
{
     char Name[SIZE],
          Building[SIZE],
          Sports[SIZE],
		  Number[SIZE];
            
};

struct Faculty
{
     char Name[SIZE],
          Dean[SIZE],
          Building[SIZE],
          Campus[SIZE];   
};

struct School
{
     char Name[SIZE],
          Building[SIZE],
          Programe[SIZE],
          ProgramTitle[SIZE],
          ProgramLevel[SIZE],
          ProgramDuration[SIZE],
          ProgramCode[SIZE];
               
};

struct Date
{
     int Day,Month,Year;  
};

struct Student 
{
     char Name[SIZE],
          Id[SIZE];
     Date Birthday;
     int  EnrolledYear;
             
};

struct Lecturer  
{
     char Name[SIZE],
          Id[SIZE],
          Title[SIZE],
          OfficeRoom[SIZE];   
};

struct CampusSearch
{
     char Name[SIZE],
          Address[SIZE];
     int  Distance;
};

struct ClubSearch
{
     char Name[SIZE],
          Building[SIZE],
          Sports[SIZE];
     int  Number;
            
};

struct FacultySearch
{
     char Name[SIZE],
          Dean[SIZE],
          Building[SIZE],
          Campus[SIZE];   
};

struct SchoolSearch
{
     char Name[SIZE],
          Building[SIZE],
          Programe[SIZE],
          ProgramTitle[SIZE],
          ProgramLevel[SIZE],
          ProgramDuration[SIZE],
          ProgramCode[SIZE];
               
};

struct DateSearch
{
     int Day,Month,Year;  
};

struct StudentSearch 
{
     char Name[SIZE],
          Id[SIZE];
     Date Birthday;
     int  EnrolledYear;
             
};

struct LecturerSearch  
{
     char Name[SIZE],
          Id[SIZE],
          Title[SIZE],
          OfficeRoom[SIZE];   
};

