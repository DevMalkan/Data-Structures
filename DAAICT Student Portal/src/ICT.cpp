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

void ICT::DataStoring(char file[],char tempfile[])
{
    int flag=0;
    int ID1;
    string Password1,FirstName1,LastName1,Email1,data;
    int ID;
    string Password,FirstName,LastName,Email;

    //storing data of new student in respective variables

    ID = getID();
    Password = getPassword();
    FirstName = getFirstName();
    LastName = getLastName();
    Email = getEmail();

    ofstream sem;
    sem.open(file,ios::app);
    sem.close();

    //opening sem.txt in reading mode to get previously stored data
    ifstream semread(file);

    //creating temporary file for copying data from sem.txt and
    //adding new data at proper place so that ascending order of IDs is maintained
    ofstream sem_temp;
    sem_temp.open(tempfile, ios::app);

    while(semread>>ID1>>Password1>>FirstName1>>LastName1>>Email1){
        while(FirstName1.length()!=10)
            FirstName1 = FirstName1 + " ";

        while(LastName1.length()!=10)
            LastName1 = LastName1 + " ";

        if(flag == 1){
            sem_temp<<ID1<<'\t'<<Password1<<'\t'<<FirstName1<<'\t'<<LastName1<<'\t'<<Email1<<endl;
            continue;
        }

        if(ID1<ID)
            sem_temp<<ID1<<'\t'<<Password1<<'\t'<<FirstName1<<'\t'<<LastName1<<'\t'<<Email1<<endl;

        else{
                sem_temp<<ID<<'\t'<<Password<<'\t'<<FirstName<<'\t'<<LastName<<'\t'<<Email<<endl;
                sem_temp<<ID1<<'\t'<<Password1<<'\t'<<FirstName1<<'\t'<<LastName1<<'\t'<<Email1<<endl;
                flag = 1;
            }
    }
    if(flag==0)
        sem_temp<<ID<<'\t'<<Password<<'\t'<<FirstName<<'\t'<<LastName<<'\t'<<Email<<endl;

    semread.close();
    sem_temp.close();

    //deleting current sem.txt and renaming temporary file as sem1.txt

    if(remove(file)==0 && rename(tempfile,file)==0)
        cout<<"\nRegistered successfully\n\n";
}

void ICT::Semester1()
{
    char file[] = "sem1.txt";
    char tempfile[] = "sem1_temp.txt";
    DataStoring(file,tempfile);
}

void ICT::Semester2()
{
    char file[] = "sem2.txt";
    char tempfile[] = "sem2_temp.txt";
    DataStoring(file,tempfile);
}

void ICT::Semester3()
{
    char file[] = "sem3.txt";
    char tempfile[] = "sem3_temp.txt";
    DataStoring(file,tempfile);
}

void ICT::Semester4()
{
    char file[] = "sem4.txt";
    char tempfile[] = "sem4_temp.txt";
    DataStoring(file,tempfile);
}

void ICT::Semester5()
{
    char file[] = "sem5.txt";
    char tempfile[] = "sem5_temp.txt";
    DataStoring(file,tempfile);
}

void ICT::Semester6()
{
    char file[] = "sem6.txt";
    char tempfile[] = "sem6_temp.txt";
    DataStoring(file,tempfile);
}

void ICT::Semester7()
{
    char file[] = "sem7.txt";
    char tempfile[] = "sem7_temp.txt";
    DataStoring(file,tempfile);
}

void ICT::Semester8()
{
    char file[] = "sem8.txt";
    char tempfile[] = "sem8_temp.txt";
    DataStoring(file,tempfile);
}
