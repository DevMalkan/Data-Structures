#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include<stdlib.h>

#include "Student.h"
#include "ICT.h"
#include "Login.h"

using namespace std;

int main()
{
    system("cls");
    char choice, c='y';

    do{

      system("cls");

     cout<<"\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
     cout<<"\n\n\t\t\t    DAIICT STUDENT PORTAL\n";
     cout<<"\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
     cout<<"\n\n\t\t\t\t:MAIN SCREEN:\n\n";
     cout<<"\t\t\t1. Register a new student"<<endl;
     cout<<"\t\t\t2. Login as a student"<<endl;
     cout<<"\t\t\t3. List of students"<<endl;
     cout<<"\t\t\t4. Exit Program"<<endl;
     cout<<"\n\n\t\tEnter your choice: ";
     cin>>choice;

     system("cls");


     switch(choice)
     {

         case '1': int se;
                   cout<<"Select student's semester: \n";
                   cin>>se;

                   switch (se)
                   {

                       case 1:
                                {Student stu;
                                 ICT sem1;
                                 sem1.Semester1();
                                 cout<<" Press any key to proceed";
                                 getch(); }
                                 break;

                       case 2:
                                {Student stu;
                                 ICT sem2;
                                 sem2.Semester2();
                                 cout<<" Press any key to proceed";
                                 getch(); }
                                 break;

                       case 3:
                                {Student stu;
                                 ICT sem3;
                                 sem3.Semester3();
                                 cout<<" Press any key to proceed";
                                 getch(); }
                                 break;

                       case 4:
                                {Student stu;
                                 ICT sem4;
                                 sem4.Semester4();
                                 cout<<" Press any key to proceed";
                                 getch(); }
                                 break;

                       case 5:
                                {Student stu;
                                 ICT sem5;
                                 sem5.Semester5();
                                 cout<<" Press any key to proceed";
                                 getch(); }
                                 break;

                       case 6:
                                {Student stu;
                                 ICT sem6;
                                 sem6.Semester6();
                                 cout<<" Press any key to proceed";
                                 getch(); }
                                 break;

                       case 7:
                                {Student stu;
                                 ICT sem7;
                                 sem7.Semester7();
                                 cout<<" Press any key to proceed";
                                 getch(); }
                                 break;

                       case 8:
                                {Student stu;
                                 ICT sem8;
                                 sem8.Semester8();
                                 cout<<" Press any key to proceed";
                                 getch(); }
                                 break;

                       default: cout<<"Incorrect input";
                                break;
                   }
                   break;

         case '2': int s;
                   {int a,b;
                   ifstream open("log_his.txt");
                   while(open>>a>>b){
                        cout<<"\t\t\tID : "<<a<<" from Semester "<<b<<" logged in few moments ago"<<endl;
                   }
                   cout<<"\n\n";
                   open.close();}
                   cout<<"Select student's semester: \n";
                   cin>>s;

                   switch (s)
                   {

                       case 1:
                                {int a;
                                 cout<<"Enter ID"<<endl;
                                 cin>>a;
                                 Login log;
                                 log.Semester1ICT(a);
                                 cout<<" Press any key to proceed";
                                 getch();}
                                 break;

                       case 2:
                                {int a;
                                 cout<<"Enter ID"<<endl;
                                 cin>>a;
                                 Login log;
                                 log.Semester2ICT(a);
                                 cout<<" Press any key to proceed";
                                 getch();}
                                 break;

                       case 3:
                                {int a;
                                 cout<<"Enter ID"<<endl;
                                 cin>>a;
                                 Login log;
                                 log.Semester3ICT(a);
                                 cout<<" Press any key to proceed";
                                 getch();}
                                 break;

                       case 4:
                                {int a;
                                 cout<<"Enter ID"<<endl;
                                 cin>>a;
                                 Login log;
                                 log.Semester4ICT(a);
                                 cout<<" Press any key to proceed";
                                 getch();}
                                 break;

                       case 5:
                                {int a;
                                 cout<<"Enter ID"<<endl;
                                 cin>>a;
                                 Login log;
                                 log.Semester5ICT(a);
                                 cout<<" Press any key to proceed";
                                 getch();}
                                 break;

                       case 6:
                                {int a;
                                 cout<<"Enter ID"<<endl;
                                 cin>>a;
                                 Login log;
                                 log.Semester6ICT(a);
                                 cout<<" Press any key to proceed";
                                 getch();}
                                 break;

                       case 7:
                                {int a;
                                 cout<<"Enter ID"<<endl;
                                 cin>>a;
                                 Login log;
                                 log.Semester7ICT(a);
                                 cout<<" Press any key to proceed";
                                 getch();}
                                 break;

                       case 8:
                                {int a;
                                 cout<<"Enter ID"<<endl;
                                 cin>>a;
                                 Login log;
                                 log.Semester8ICT(a);
                                 cout<<" Press any key to proceed";
                                 getch();}
                                 break;

                       default: cout<<"Incorrect input";
                                break;
                   }
                   break;

         case '3': char user[15];
                   char pass[15];

                   cout<<"\nEnter username: ";
                   cin>>user;
                   if (strcmp(user,"admin")==0)
                   {
                       cout<<"\nEnter Password: ";
                       cin>>pass;
                       if (strcmp(pass,"daiict")==0)
                       {
                           system("cls");

                       int sm;
                       cout<<"Select student's semester: \n";
                       cin>>sm;

                       system("cls");
                       cout << "\t\t\t    -----------------------------------------------------\n";
                       cout << "\t\t\t    |                                                   |\n";
                       cout << "\t\t\t    |                List of students                   |\n";
                       cout << "\t\t\t    |                                                   |\n";
                       cout << "\t\t\t    -----------------------------------------------------\n";

                       cout << "\n\t\t\t\t\t";

                       cout << "\n===========================================================================================================\n";
                       cout << "ID       \tPassword\tFirst name  \tLast name   \tEmail\n";
                       cout << "===========================================================================================================\n";

                       switch (sm)
                       {
                           case 1: {
                                   string data;
                                   ifstream file("sem1.txt");
                                   while(getline(file,data))
                                   {
                                       cout<<data<<endl;
                                   }
                                   cout<<"\n\n\n Press any key to proceed";
                                     getch();
                                   }
                                   break;

                           case 2: {
                                   string data;
                                   ifstream file("sem2.txt");
                                   while(getline(file,data))
                                   {
                                       cout<<data<<endl;
                                   }
                                   cout<<"\n\n\n Press any key to proceed";
                                     getch();
                                   }
                                   break;

                           case 3: {
                                   string data;
                                   ifstream file("sem3.txt");
                                   while(getline(file,data))
                                   {
                                       cout<<data<<endl;
                                   }
                                   cout<<"\n\n\n Press any key to proceed";
                                     getch();
                                   }
                                   break;

                            case 4: {
                                   string data;
                                   ifstream file("sem4.txt");
                                   while(getline(file,data))
                                   {
                                       cout<<data<<endl;
                                   }
                                   cout<<"\n\n\n Press any key to proceed";
                                     getch();
                                   }
                                   break;

                            case 5: {
                                   string data;
                                   ifstream file("sem5.txt");
                                   while(getline(file,data))
                                   {
                                       cout<<data<<endl;
                                   }
                                   cout<<"\n\n\n Press any key to proceed";
                                     getch();
                                   }
                                   break;

                            case 6: {
                                   string data;
                                   ifstream file("sem6.txt");
                                   while(getline(file,data))
                                   {
                                       cout<<data<<endl;
                                   }
                                   cout<<"\n\n\n Press any key to proceed";
                                     getch();
                                   }
                                   break;

                            case 7: {
                                   string data;
                                   ifstream file("sem7.txt");
                                   while(getline(file,data))
                                   {
                                       cout<<data<<endl;
                                   }
                                   cout<<"\n\n\n Press any key to proceed";
                                     getch();
                                   }
                                   break;


                            case 8: {
                                   string data;
                                   ifstream file("sem8.txt");
                                   while(getline(file,data))
                                   {
                                       cout<<data<<endl;
                                   }
                                   cout<<"\n\n\n Press any key to proceed";
                                     getch();
                                   }
                                   break;

                            default: cout<<"Incorrect input";
                                    break;

                       }
                       break;

                        }
                        else
                        {
                           cout<<"\n\n\tIncorrect Password!!";
                           break;
                        }
                    }
                    else
                    {
                       cout<<"\n\n\tIncorrect Username!!";
                       break;
                    }

         case '4': cout<<"Thank you! \n \n ";
                   c='n';
                   break;

     }
    }while(c=='y');
    return 0;
}
