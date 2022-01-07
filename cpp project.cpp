#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <time.h>

using namespace std;
class ticket
{
	
	public:
	char name[10];
	char cno[10];
	
}t;

class card : public ticket //inheritence for public ticket
{  

public:
	char address[50];
	char emailid[20];
	
}v; 

void pay(int);
void random();
void card();

int main()
{
	system("CLS");
	int ent, a, b, N, x, p, cardid;
	char ans;
	do
	{
		
		cout<<"|======================================================================================================================|\n";
		cout<<"|                                            Movie Ticket Booking System                                               |\n";                                        
		cout<<"|======================================================================================================================|\n";
		cout<<"|                                                   Welcome                                                            |\n";	 	
		cout<<"|                                                                                                                      |\n";																				//Menu for the user
		cout<<"|                                               1. Book A Movie                                                        |\n";
		cout<<"|                                                                                                                      |\n";
		cout<<"|                                               2. Check Ticket                                                        |\n";
		cout<<"|                                                                                                                      |\n";
		cout<<"|                                               3. About                                                               |\n";
		cout<<"|                                                                                                                      |\n";
		cout<<"|                                               4. MovieCard Registration                                              |\n";
		cout<<"|                                                                                                                      |\n";
		cout<<"|                                               5. Exit                                                                |\n";
		cout<<"|======================================================================================================================|\n";
		
		cout<<"                                               Enter Your Choice : ";
		cin>>ent;
		switch(ent)
		{
			case 1:	system("CLS"); 
			{
			
		
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                 Select Date                                                          |\n";                                        
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";	 	
				cout<<"|                                                                                                                      |\n";																				//Menu for the user
				cout<<"|                                                1. 07/08/2020                                                         |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                2. 08/08/2020                                                         |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                3. 09/08/2020                                                         |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                4. 10/08/2020                                                         |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                5. 11/08/2020                                                         |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                6. 12/08/2020                                                         |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                7. 13/08/2020                                                         |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"                                              Enter Your Choice : ";
				cin>>p;
				switch(p)
				{
				case 1: 
				
				system("CLS");
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                   Today's Movie Are                                                  |\n";                                        
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               1. Batman Begins                                                       |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               2. Pain & Gain                                                         |\n";                
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               3. Pumping IRON                                                        |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               4. Need For Speed                                                      |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               5. Intime                                                              |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               6. Undisputed 4                                                        |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"                                            Enter Your Choice :"<<"\t";
					cin>>a;
					cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
					switch(a)
					{
						case 1:
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						int x;
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n                                                Your ticket is here: ";
						cout<<"\n                                                Name           :"<<t.name;
						cout<<"\n                                                Contact No     :"<<t.cno;
						cout<<"\n                                                Show timings   :";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
						case 2: 
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
						case 3: 
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
						case 4: 
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
						case 5: 
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
						case 6: 
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
					}
			
				case 2: 
				
				system("CLS");
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                08/08/2020's Movie Are                                                |\n";                                        
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               1. Haunting of the Hill House                                          |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               2. Antman                                                              |\n";                
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               3. Batman VS Superman                                                  |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               4. Intime                                                              |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               5. WAR                                                                 |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               6. The Flash                                                           |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"                                            Enter Your Choice :"<<"\t";
					cin>>a;
					cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
					switch(a)
					{
						case 1:
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						int x;
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
						cout<<"\n\t\t\t\t Name 		    :"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\t Show timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 5: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			case 6: 
			system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}
		
				case 3: 	
				system("CLS");
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                09/08/2020's Movie Are                                                |\n";                                        
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                            	                                       |\n";
				cout<<"|                                               1. Snake Island                                                        |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               2. Pumping IRON                                                        |\n";                
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               3. The Marine                                                          |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               4. Pain & Gain                                                         |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               5. Kungfu Hustle                                                       |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               6. Sniper                                                              |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"                                            Enter Your Choice :"<<"\t";
					cin>>a;
					cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
					switch(a)
					{
						case 1:
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						int x;
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
						cout<<"\n\t\t\t\t Name 		    :"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\t Show timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 5: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	                 |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			case 6: 
			system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}
			
			case 4: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                10/08/2020's Movie Are                                                |\n";                                        
				cout<<"|======================================================================================================================|\n";
			    cout<<"|                                                                                                                      |\n";
				cout<<"|                                               1. Batman Begins                                                       |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               2. King Kong                                                           |\n";                
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               3. Haunting of The Hill House                                          |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               4. Ipman                                                               |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               5. Joker                                                               |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               6. Need For Speed                                                      |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"                                            Enter Your Choice :"<<"\t";
					cin>>a;
					cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
					switch(a)
					{
						case 1:
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	                          |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	                              |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						int x;
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
						cout<<"\n\t\t\t\t Name 		    :"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\t Show timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 5: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			case 6: 
			system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}
		
			case 5: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                11/08/2020's Movie Are                                                |\n";                                        
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               1. Kungfu Panda                                                        |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               2. The Wolf Of Wall Street                                             |\n";                
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               3. SCAM                                                                |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               4. INCIDIOUS                                                           |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               5. PAYBACK                                                             |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               6. BAYWATCH                                                            |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"                                            Enter Your Choice :"<<"\t";
					cin>>a;
					cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
					switch(a)
					{
						case 1:
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						int x;
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
						cout<<"\n\t\t\t\t Name 		    :"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\t Show timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 5: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			case 6: 
			system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}
			
			case 6: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                12/08/2020's Movie Are                                                |\n";                                        
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               1. The Mutant                                                          |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               2. Tokyo Drift                                                         |\n";                
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               3. Here Comes The Pain                                                 |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               4. HELLBLADE                                                           |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               5. DBZ:BROLY                                                           |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               6. Death Note                                                          |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"                                            Enter Your Choice :"<<"\t";
					cin>>a;
					cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
					switch(a)
					{
						case 1:
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						int x;
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
						cout<<"\n\t\t\t\t Name 		    :"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\t Show timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 5: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			case 6: 
			system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}
		
			case 7:
				system("CLS");
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                13/08/2020's Movie Are                                                |\n";                                        
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               1. Sniper                                                              |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               2. King Kong                                                           |\n";                
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               3. Snake Island                                                        |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               4. Pain & Gain                                                         |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               5. Batman Begins                                                       |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                               6. Kungfu Hustle                                                       |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"                                            Enter Your Choice :"<<"\t";
					cin>>a;
					cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
					switch(a)
					{
						case 1:
						system("CLS");
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						int x;
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
						cout<<"\n\t\t\t\t Name 		    :"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\t Show timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 5: 
				system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			case 6: 
			system("CLS");
				cout<<"|======================================================================================================================|\n";
						cout<<"|                                             Select The The Timing Of Show                                            |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     1. 08:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     2. 12:00                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     3. 16:00						    	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     4. 20:00 						  	       |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     5. 24:30                                                         |\n";
						cout<<"|                                                                                                                      |\n";
						cout<<"|                                                     6. 04:00                                                         |\n";					
						cout<<"|                                                                                                                      |\n";
						cout<<"|======================================================================================================================|\n";
						cout<<"\n                                            Please select the timings : ";
						cin>>b;
						cout<<"\n                                            Enter Your Name : ";
						cin>>t.name;
						cout<<"\n                                            Enter Your Contact Number : ";
						cin>>t.cno;
						cout<<"\n                                            How Many Tickets You Want To Purchase : ";
						cin>>x;
						cout<<"\n|======================================================================================================================|\n";
						pay(x);
						cout<<"\n\n\t\t\t\t Your ticket is here:";
						cout<<"\n\t\t\t\t Name 		:"<<t.name;
						cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
						cout<<"\n\t\t\t\tShow timings 	:";
						switch(b)
						{
							case 1:	cout<<"08:00";
								break;
							case 2:	cout<<"12:00";
								break;
							case 3:	cout<<"16:00";
								break;
							case 4:	cout<<"20:00";
								break;
							case 5:	cout<<"24:00";
								break;
							case 6:	cout<<"04:00";
								break;
						}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}
			break;
			}
			
			}
		
			case 2:	system("CLS");
			{
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                      Thank You For Booking The Tickets Online                                        |\n";
				cout<<"|======================================================================================================================|\n\n";
				cout<<"                        To Print Out The Tickets Please Enter Your Transaction ID In The Portal                         \n";				
				struct pre
				{
					int trsnid;
					char name[10];
				} p;
				cout<<"                                         Enter your transaction id : "; 
				cin>>p.trsnid;
				cout <<"                                           Enter your name : ";
				cin>>p.name;
				cout<<"\n|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                              Please Collect Your Tickets                                             |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                    Enjoy Your Movie                                                  |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n\n";
				cout<<"                                        Do you want to choose another option(y/n) : ";
				cin>>ans;
				system("CLS");
				break;
			}	
				
			case 3: system("CLS");
			{
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                             Thanks For Using Our App                                                 |\n";                                        
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                          You Can Contect Our Theater Office For More Help And Information                            |\n";		
				cout<<"|                                             We Will Glad To Help You                                                 |\n";	
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                     ADDRESS                                                          |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                 XYZ MALL 9th Floor                                                   |\n";
				cout<<"|                                                     XYZ Nagar                                                        |\n";
				cout<<"|                                                     Udaipur                                                          |\n";	
				cout<<"|                                                 PINCODE : 313001                                                     |\n";
				cout<<"|                                             Contect No. : 1234567890                                                 |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n\n";					
				cout<<"                                    Do you want to choose another option(y/n) : ";
				cin>>ans;
				system("CLS");
				break;
	    	}
	    
			case 4: system("CLS"); 
			{
			
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                      Welcome To MovieCard Registration Portal                                        |\n";                                        
				cout<<"|======================================================================================================================|\n\n";																												//card membership
				card();
				cout<<"|                                                       NOTE                                                           |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                         It Will Take Us A Week For Process Your Registration For The Card                            |\n"; 
				cout<<"|                                Please See The Benefits Of The Card On The Next Page                                  |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|                                                      BENEFITS                                                        |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|               1.   For every purchase of a movie ticket you get 25 points(1point = 1Rs)                              |\n";
				cout<<"|                    so after 16 movies you get a free normal class movie ticket.                                	|\n";
				cout<<"|               2. You are provided with regular updates regarding the movie and the showtimings via SMS.          	|\n";
				cout<<"|               3. Anytime prebook tickets for the upcoming movie and preffered seats will be provided.                |\n";
				cout<<"|                                                                                                                      |\n";
				cout<<"|======================================================================================================================|\n";
			
		
				
					cout<<"                                    Do you want to choose another option(y/n) : ";
				cin>>ans;
				system("CLS");
				break;
			}
				
			case 5: 
			{
			
				system("CLS");
				cout << "Thanks For using Our App";
				exit(0);
				break;
			}
			}
		}
		while(ans=='y');
	}
	
void card()
{
	int cardid;
	cout<<"                                         Please Provide Us Following Details                                            \n\n";
	cout<<"                                             Enter your name : ";
	cin>>v.name;
	cout<<"\n                                    Enter your mobile number : ";
	cin>>v.cno;
	cout<<"\n                                         Enter Your address : ";
	cin>>v.address;
	cout<<"\n                                       Enter Your E-Mail ID : ";
	cin>>v.emailid;
	system("CLS");
	int ID;
	srand (time(NULL));
	ID = rand() % 400000 + 4000000;
	if (ID<0)
	ID=(ID*-1);
	cout<<"|======================================================================================================================|\n";
	cout<<"|                                      Your new card number is : " <<ID<<"                                               |\n";
	fstream fout;
	fout.open("card.dat", ios::out|ios::app);
	fout<<"\n Name :"<<v.name<<"\n"<<"\n Mobile No. :"<<v.cno<<"\n"<<"\n Address :"<<v.address<<"\n"<<"\n Mail ID :"<<v.emailid<<"\n"<<"\nCard Number:"<<ID;
	fout.close();
	cout<<"|                                Thank you for the registeration for the card                                          |\n";
	cout<<"|======================================================================================================================|\n";
}

void pay(int a)
{
	
	int normal, premium, amt[2],id;
	time_t t = time(NULL);						
	tm* timePtr = localtime(&t);
	fstream fin;
	fin.open("card.dat", ios::in|ios::app);
	fin>>id;

	cout<<"|                                             Select Your Seating Class                                                |\n";
	cout<<"|======================================================================================================================|\n";
	cout<<"|                     1.Normal Class                     ||                     2. Premium Class                       |\n";
	cout<<"|======================================================================================================================|\n";
	cout<<"                                             Please Enter Your Option : ";
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<"|======================================================================================================================|\n";
		cout<<"|                                           You selected for a Normal show                                             |\n";
		cout<<"|======================================================================================================================|\n";
		system("PAUSE");
		system("CLS");
		amt[1] = a * 400;
		char final;
		cout<<"|======================================================================================================================|\n";
		cout<<"|                                                    Payment Section                                                   |\n";
		cout<<"|======================================================================================================================|\n\n";
		
		cout<<"\n"<<"                                                    Your Bill : "<<amt[1]<<"\n";
		cout<<"\n                                             Do You Have MovieCard(y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			fin.read((char*) &v, sizeof(v));
			
			cout<<"\n                                       Enter The Card Number[10 Digits] : ";
			cin >> cid;	
			cout<<"\n                                           "<<"            Paid :"<<amt[1]<<"\n";
			cout<<"|======================================================================================================================|\n";
			
		}
		else
		{
		
			cout<<"|======================================================================================================================|\n";
			cout<<"                                                    Paying By Card \n\n";
			cout<<"                                              Name Of The Card Holder : ";
			char n[10];
			cin>>n;
			cout<<"\n\n";
			cout<<"                                               Enter The Card Number :  ";
			char Card[16];
			cin>>Card;
			cout<<"\n\n";
			cout<<"                                                    Expiry(MM) : ";
			int expirymm,expiryyy;
			cin>>expirymm;
			cout<<"\n\n";
			cout<<"                                                   Expiry(YYYY) : ";
			cin>>expiryyy;
			cout<<"\n\n";
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900))
			{
				if(expirymm<=(timePtr->tm_mon))
				{
					cout<<"                                               Enter The Month Again : ";
					cin>>expirymm;
					cout<<"\n\n";
				}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"                                             Please Enter A Valid Year : ";
					cin>>expiryyy;
					cout<<"\n\n";
				}
			}
		
			int h;
			cout<<"                                                    Enter the CVV : ";
			char password[3];
			cin>>h;
			cout<<"\n";
			cout<<"\n                                           "<<"            Paid :"<<amt[1]<<"\n";
			cout<<"|======================================================================================================================|\n";	
			}
		
	}
	else
	
	{
		cout<<"|======================================================================================================================|\n";
		cout<<"|                                          You selected for a Premium show                                             |\n";
		cout<<"|======================================================================================================================|\n";
		system("PAUSE");
		system("CLS");
		amt[2] = a * 700;
		char final;
		cout<<"|======================================================================================================================|\n";
		cout<<"|                                                    Payment Section                                                   |\n";
		cout<<"|======================================================================================================================|\n\n";
		
		cout<<"\n"<<"                                                    Your Bill : "<<amt[2]<<"\n";
		cout<<"\n                                             Do You Have MovieCard(y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			fin.read((char*) &v, sizeof(v));
			
			cout<<"\n                                       Enter The Card Number[10 Digits] : ";
			cin >> cid;	
			cout<<"\n                                           "<<"            Paid :"<<amt[2]<<"\n";
			cout<<"|======================================================================================================================|\n";
			
		}
		if(final=='n')
		{
		
			cout<<"|======================================================================================================================|\n";
			cout<<"                                                    Paying By Card \n\n";
			cout<<"                                              Name Of The Card Holder : ";
			char n[10];
			cin>>n;
			cout<<"\n\n";
			cout<<"                                               Enter The Card Number :  ";
			char Card[16];
			cin>>Card;
			cout<<"\n\n";
			cout<<"                                                    Expiry(MM) : ";
			int expirymm,expiryyy;
			cin>>expirymm;
			cout<<"\n\n";
			cout<<"                                                   Expiry(YYYY) : ";
			cin>>expiryyy;
			cout<<"\n\n";
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900))
			{
				if(expirymm<=(timePtr->tm_mon))
				{
					cout<<"                                               Enter The Month Again : ";
					cin>>expirymm;
					cout<<"\n\n";
				}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"                                             Please Enter A Valid Year : ";
					cin>>expiryyy;
					cout<<"\n\n";
				}
			}
		
			int h;
			cout<<"                                                    Enter the CVV : ";
			char password[3];
			cin>>h;
			cout<<"\n";
			cout<<"\n                                           "<<"            Paid :"<<amt[2]<<"\n";
			cout<<"|======================================================================================================================|\n";	
		}
	}
}
