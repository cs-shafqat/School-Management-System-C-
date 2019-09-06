#include <iostream>
using namespace::std;
#include <conio.h>
#ifndef SEARCH_H
#define SEARCH_H
#include "Search.h"
#endif



#ifndef STRUCTS_H
#define STRUCTS_H
#include "Structs.h"
#endif

int InputSwitch()
{
				Up:
	            int InputChoice;
   	   			system("CLS");
   	   		    InputChoice = InputMenu();
   	   		    switch(InputChoice)
   	   		    {
    		   	 	case 1:
  		   	 			   system("CLS");
						   Campus campus;
                           campus = InputCampus(campus);
                           PrintCampus(campus);
                           cout << "Press Enter To Go Back: ";
                           getch();   
                           goto Up;
						break;	
					case 2:
					       system("CLS");
						   Club club;
                           club = InputClub(club);
                           PrintClub(club);
                           cout << "Press Enter To Go Back: ";
                           getch();
                           goto Up;
					    break;
					case 3:
					        system("CLS");
							Faculty faculty;
                  			faculty = InputFaculty(faculty);
                  			PrintFaculty(faculty);
                  			cout << "Press Enter To Go Back: ";
                  			getch();
                  			goto Up;
                  		break;	
                  	case 4:
                  	        system("CLS");
					  	    School school;
                  			school = InputSchool(school);
                  			PrintSchool(school);
                  			cout << "Press Enter To Go Back: ";
                  			getch();
                  			goto Up;
                  		break;	
                    case 5: 
							system("CLS");    
                            Student student;
                            student = InputStudent(student);
                            PrintStudent(student);
                            cout << "Press Enter To Go Back: ";
                            getch();
                            goto Up;
                        break;    
            	    case 6:
            	            system("CLS");
                            Lecturer lecturer;
                            lecturer = InputLecturer(lecturer);
                            PrintLecturer(lecturer);
                            cout << "Press Enter To Go Back: ";
                            getch();
                            goto Up;
                         break;
                    case 7:
                    	 return MainMenu(); 
					     break;       
					default:
					        system("CLS");
						    cout << "Invalid Entry" << endl; 		   
                            cout << "Press Enter To Go Back: ";
                            getch();
                            goto Up;	
   	   		    }
}

int OutputSwitch()
{
			  Up:	
			  system("CLS");
   	          int PrintChoice;
   	          PrintChoice = PrintMenu();
   		      switch(PrintChoice)
   		      {
      		  	  case 1:
   		  	  			 system("CLS");
                         PrintAllCampus();
                         cout << "Press Enter To Go Back: ";
                         getch();
                         goto Up;
                       break;
                  case 2:
                  		 system("CLS");
                         PrintAllClub();
                         cout << "Press Enter To Go Back: ";
                         getch();
                         goto Up;
                       break;
                  case 3:
                  		 system("CLS");
				         PrintAllFaculty();
                         cout << "Press Enter to view menu: ";
                         getch();
                         goto Up;
                       break;
				  case 4:
				  		 system("CLS");
				         PrintAllSchooles();
                         cout << "Press Enter to view menu: ";
                         getch();
                         goto Up;
                       break;
				  case 5:
				  		 system("CLS");	
				  		 PrintAllStudent();
      			         cout << "Press Enter to view menu: ";
                         getch();
                         goto Up;
                       break;
				  case 6:
				         system("CLS"); 
				         PrintAllLecturer();
                         cout << "Press Enter to view menu: ";
                         getch();
						 goto Up; 
                       break;
				  case 7:
				  		 system("CLS");
				         return MainMenu();
					break;
				  default:
						    system("CLS");
						    cout << "Invalid Entry" << endl; 		   
                            cout << "Press Enter To Go Back: ";
                            getch();
                            goto Up;	
 	   	   		    	         
			    } 
}

int SearchSwitch()
{
				Search:
	            system("CLS");
		   	    int SearchChoice;
 		        SearchChoice = SearchingMenu();
   		           switch(SearchChoice)
   		        {
        			case 1:
        					int Searchincamp;
        					system("CLS");
        					Searchincamp = SearchingCamp();
        					if(Searchincamp == 1)
        					{
								char name[100];
								system("CLS");
					        	cout << "Please Enter Name: " ;
								cin.ignore();
								cin.getline(name,100);
								for(int i=0;i<CampusIndex;i++)
								{
									int cmp = strcmp(Campuses[i].Name, name);
					        	
					        		if(cmp == 0)
									{
					        			PrintCampus(Campuses[i]);
									}
		        	   				else 
									{
										cout << "No Result Match" << endl;
									}
								
								}
							}
					        else if(Searchincamp == 2)
					        {
					        	char address[100];
								system("CLS");
					        	cout << "Please Enter Address: " ;
								cin.ignore();
								cin.getline(address,100);
								for(int i=0;i<CampusIndex;i++)
								{
									int cmp = strcmp(Campuses[i].Address, address);
					        	
					        		if(cmp == 0)
									{
					        			PrintCampus(Campuses[i]);
									}
		        	   				else
									{
										cout << "No Result Match" << endl;
									}
								}
        						
        					}
        					else if(Searchincamp == 3)
        					{
        						int cmp_distance;
        						system("CLS");
								bool campus_found = false;

        						
					        	cout << "Please Enter Campus Distance: ";
					        	cin  >> cmp_distance;
								for(int i = 0; i < CampusIndex; i++)
					        	{
	        						if(Campuses[i].Distance == cmp_distance)
					        		{
	        							PrintCampus(Campuses[i]);
										campus_found = true;
										break;
	        						}
	        					}

								if(campus_found == false)
									cout << "No Result Match" << endl;

					        }
					        else
					        {
        						cout << "Invalid Entry" << endl
        						<< "Press Enter To Go Back: ";
                            	getch();
                            	goto Search;
        					}
        					cout << "Press Enter To Go Back: ";
                            getch();
                            goto Search;

					 	break;
		 			case 2:
		 					int Searchinclub;
        					system("CLS");
        					Searchinclub = SearchingClub();
        					if(Searchinclub == 1)
        					{
        						system("CLS");
								char name[100];
								cout << "Please Enter Name: " ;
								cin.ignore();
								cin.getline(name,100);
								for(int i=0;i<ClubIndex;i++)
								{
									int cmp = strcmp(Clubs[i].Name,name);
									if(cmp == 0)
									{
										PrintClub(Clubs[i]);
									}
									else 
									{
										cout << "No Result Match" << endl;
									}
								}
					        		
					        }
					        else if(Searchinclub == 2)
					        {
					        	system("CLS");
        						char Bname[100];
								cout << "Please Enter Building Name: " ;
								cin.ignore();
								cin.getline(Bname,100);
								for(int i=0;i<ClubIndex;i++)
								{
									int cmp = strcmp(Clubs[i].Name,Bname);
									if(cmp == 0)
									{
										PrintClub(Clubs[i]);
									}
									else 
									{
										cout << "No Result Match" << endl;
									}
								}
        						
        					}
        					else if(Searchinclub == 3)
        					{
					        	system("CLS");
        						char Sname[100];
								cout << "Please Enter Building Name: " ;
								cin.ignore();
								cin.getline(Sname,100);
								for(int i=0;i<ClubIndex;i++)
								{
									int cmp = strcmp(Clubs[i].Name,Sname);
									if(cmp == 0)
									{
										PrintClub(Clubs[i]);
									}
									else 
									{
										cout << "No Result Match" << endl;
									}
								}
        						
					        }
        					else if(Searchinclub == 4)
        					{
        						system("CLS");
								char No[SIZE];
					        	cout << "Please Phone Number: ";
								cin.getline(No,SIZE);
								for(int i=0;i<ClubIndex;i++)
								{
									int cmp = strcmp(Clubs[i].Number,No);
									if(cmp==0)
									{
										PrintClub(Clubs[i]);
									}
									else 
									{
										cout << "No Result Match";
									}
								}
					        }
					        else
					        {
        						cout << "Invalid Entry" << endl
        						<< "Press Enter To Go Back: ";
                            	getch();
                            	goto Search;
        					}
        					cout << "Press Enter To Go Back: ";
                            getch();
                            goto Search;

					 	break;
				 	case 3:
				 			int Searchinfaculty;
        					system("CLS");
        					Searchinfaculty = SearchingFaculty();
        					if(Searchinfaculty == 1)
        					{

        						system("CLS");
								char name[100];
					        	cout << "Please Enter Name: " ;	
								cin.ignore();
								cin.getline(name,100);
								for(int i=0;i<FacultyIndex;i++)
								{
									int cmp = strcmp(Faculties[i].Name,name);
									if(cmp==0)
									{
										PrintFaculty(Faculties[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else if(Searchinfaculty == 2)
					        {
					        	system("CLS");
								char Dname[100];
        						cout << "Please Enter Dean Name: " ;
        						cin.ignore();
								cin.getline(Dname,100);
								for(int i=0;i<FacultyIndex;i++)
								{
									int cmp = strcmp(Faculties[i].Dean,Dname);
									if(cmp==0)
									{
										PrintFaculty(Faculties[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
        					}
        					else if(Searchinfaculty == 3)
        					{
					        	system("CLS");
								char Bname[100];
        						cout << "Please Enter Building Name: " ;
        						cin.ignore();
								cin.getline(Bname,100);
								for(int i=0;i<FacultyIndex;i++)
								{
									int cmp = strcmp(Faculties[i].Building,Bname);
									if(cmp==0)
									{
										PrintFaculty(Faculties[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
        					else if(Searchinfaculty == 4)
        					{
        						system("CLS");
								char Cname[100];
					        	cout << "Please Enter Campus Name: ";
								cin.ignore();
								cin.getline(Cname,100);
								for(int i=0;i<FacultyIndex;i++)
								{
									int cmp = strcmp(Faculties[i].Campus,Cname);
									if(cmp==0)
									{
										PrintFaculty(Faculties[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else
					        {
        						cout << "Invalid Entry" << endl
        						<< "Press Enter To Go Back: ";
                            	getch();
                            	goto Search;
        					}
        					cout << "Press Enter To Go Back: ";
                            getch();
                            goto Search;


					 	break;
				 	case 4:
				 			int Searchinschool;
        					system("CLS");
        					Searchinschool = SearchingSchool();
        					if(Searchinschool == 1)
        					{
        						system("CLS");
								char name[100];
					        	cout << "Please Enter Name: " ;	
								cin.ignore();
								cin.getline(name,100);
								for(int i=0;i<SchoolIndex;i++)
								{
									int cmp = strcmp(Schooles[i].Name,name);
									if(cmp==0)
									{
										PrintSchool(Schooles[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else if(Searchinschool == 2)
					        {
					        	system("CLS");
								char Bname[100];
        						cout << "Please Enter Building Name: " ;
        						cin.ignore();
								cin.getline(Bname,100);
								for(int i=0;i<SchoolIndex;i++)
								{
									int cmp = strcmp(Schooles[i].Building,Bname);
									if(cmp==0)
									{
										PrintSchool(Schooles[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
        					}
        					else if(Searchinschool == 3)
        					{
					        	system("CLS");
								char Pname[100];
        						cout << "Please Enter Program Name: " ;
        						cin.ignore();
								cin.getline(Pname,100);
								for(int i=0;i<SchoolIndex;i++)
								{
									int cmp = strcmp(Schooles[i].Programe,Pname);
									if(cmp==0)
									{
										PrintSchool(Schooles[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
        					else if(Searchinschool == 4)
        					{
        						system("CLS");
								char Ptitle[100];
					        	cout << "Please Enter Program Title: ";
								cin.ignore();
								cin.getline(Ptitle,100);
								for(int i=0;i<SchoolIndex;i++)
								{
									int cmp = strcmp(Schooles[i].ProgramTitle,Ptitle);
									if(cmp==0)
									{
										PrintSchool(Schooles[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else if(Searchinschool == 5)
        					{
        						system("CLS");
								char Plevel[100];
					        	cout << "Please Enter Program Level: ";
								cin.ignore();
								cin.getline(Plevel,100);
								for(int i=0;i<SchoolIndex;i++)
								{
									int cmp = strcmp(Schooles[i].ProgramLevel,Plevel);
									if(cmp==0)
									{
										PrintSchool(Schooles[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else if(Searchinschool == 6)
        					{
        						system("CLS");
								char Pduration[100];
					        	cout << "Please Enter Program Duration: ";
								cin.ignore();
								cin.getline(Pduration,100);
								for(int i=0;i<SchoolIndex;i++)
								{
									int cmp = strcmp(Schooles[i].ProgramDuration,Pduration);
									if(cmp==0)
									{
										PrintSchool(Schooles[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else if(Searchinschool == 7)
        					{
        						system("CLS");
								char Pcode[100];
					        	cout << "Please Enter Program Code: ";
								cin.ignore();
								cin.getline(Pcode,100);
								for(int i=0;i<SchoolIndex;i++)
								{
									int cmp = strcmp(Schooles[i].ProgramCode,Pcode);
									if(cmp==0)
									{
										PrintSchool(Schooles[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else
					        {
        						cout << "Invalid Entry" << endl
        						<< "Press Enter To Go Back: ";
                            	getch();
                            	goto Search;
        					}
        					cout << "Press Enter To Go Back: ";
                            getch();
                            goto Search;
					 	break;
				 	case 5:
				 			int Searchinstudent;
        					system("CLS");
        					Searchinstudent = SearchingStudent();
        					if(Searchinstudent == 1)
        					{
        						system("CLS");
								char name[100];
					        	cout << "Please Enter Name Of Student: " ;	
								cin.ignore();
								cin.getline(name,100);
								for(int i=0;i<StudentIndex;i++)
								{
									int cmp = strcmp(Students[i].Name,name);
									if(cmp==0)
									{
										PrintStudent(Students[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else if(Searchinstudent == 2)
					        {
					        	system("CLS");
								char Sid[100];
        						cout << "Please Enter Id Of Student: " ;
        						cin.ignore();
								cin.getline(Sid,100);
								for(int i=0;i<StudentIndex;i++)
								{
									int cmp = strcmp(Students[i].Id,Sid);
									if(cmp==0)
									{
										PrintStudent(Students[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
        					}
        					else if(Searchinstudent == 3)
        					{
					        	system("CLS");
								Date birthday;
								cout << "Please Enter Birthday Of Student" << endl << "Enter Day: " ;
								cin >> birthday.Day;
								cout << "Enter Month: ";
								cin >> birthday.Month;
								cout << "Enter Year: ";
								cin >> birthday.Year;
								for(int i=0;i<StudentIndex;i++)
								{
									
									if(Students[i].Birthday.Day==birthday.Day && Students[i].Birthday.Month==birthday.Month
										&& Students[i].Birthday.Year==birthday.Year)
									{
										PrintStudent(Students[i]);

									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
        					else if(Searchinstudent == 4)
        					{
        						system("CLS");
								int enrolledyear;
					        	cout << "Please Enter Enrolled Year Of Student: ";
								cin >> enrolledyear;
								for(int i=0;i<StudentIndex;i++)
								{
									if (Students[i].EnrolledYear==enrolledyear)
									{
										PrintStudent(Students[i]);
									}
								}
					        }
					        else
					        {
        						cout << "Invalid Entry" << endl
        						<< "Press Enter To Go Back: ";
                            	getch();
                            	goto Search;
        					}
					        cout << "Press Enter To Go Back: ";
                            getch();
                            goto Search;
					 	break;
				 	case 6:
				 			int Searchinlecturer;
        					system("CLS");
        					Searchinlecturer = SearchingLecturer();
        					if(Searchinlecturer == 1)
        					{
        						system("CLS");
								char name[100];
					        	cout << "Please Enter Name Of Lecturer: " ;	
								cin.ignore();
								cin.getline(name,100);
								for(int i=0;i<LecturesIndex;i++)
								{
									int cmp = strcmp(Lecturers[i].Name,name);
									if(cmp==0)
									{
										PrintLecturer(Lecturers[i]);
									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else if(Searchinlecturer == 2)
					        {
					        	system("CLS");
								char id[100];
        						cout << "Please Enter Id Of Lecturer: " ;
								cin.ignore();
								cin.getline(id,100);
								for(int i=0;i<LecturesIndex;i++)
								{
									int cmp = strcmp(Lecturers[i].Name,id);
									if(cmp==0)
									{
										PrintLecturer(Lecturers[i]);
									}
									else
									{
										cout << "No Result Match";
									}
								}
        						
        					}
        					else if(Searchinlecturer == 3)
        					{
					        	system("CLS");
								char title[100];
        						cout << "Please Enter Title Of Lecturer: " ;
        						cin.ignore();
								cin.getline(title,100);
								for(int i=0;i<LecturesIndex;i++)
								{
									int cmp = strcmp(Lecturers[i].Name,title);
									if(cmp==0)
									{
										PrintLecturer(Lecturers[i]);
									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
        					else if(Searchinlecturer == 4)
        					{
        						system("CLS");
								char room[100];
					        	cout << "Please Enter Office Room Of Lecturer: ";
								cin.ignore();
								cin.getline(room,100);
								for(int i=0;i<LecturesIndex;i++)
								{
									int cmp = strcmp(Lecturers[i].Name,room);
									if(cmp==0)
									{
										PrintLecturer(Lecturers[i]);
									}
									else
									{
										cout << "No Result Match";
									}
								}
					        }
					        else
					        {
        						cout << "Invalid Entry" << endl
        						<< "Press Enter To Go Back: ";
                            	getch();
                            	goto Search;
        					}
					        cout << "Press Enter To Go Back: ";
                            getch();
                            goto Search;
        					cout << "Press Enter To Go Back: ";
                            getch();
                            goto Search;
        						 	break;
					case 7:
                            return MainMenu();	
 	   	   		    	    
						break;	   	 
        		}
   		        
}

