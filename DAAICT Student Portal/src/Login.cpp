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

void Login::Check_n_Display(char filename[],int n,int i)
{
    int ID,flag=0;
    string userpass,Password,FirstName,LastName,Email;
    ifstream sem(filename);
    while(sem>>ID>>Password>>FirstName>>LastName>>Email){
        //if user's ID is matched then user is asked for password
        //and data is displayed if password entered is correct
        if(ID == n){
            flag =1;
            cout<<"Enter password"<<endl;
            cin>>userpass;
            if(userpass.compare(Password)==0){
                ShowData(ID,Password,FirstName,LastName,Email);
                break;
            }
            else
                cout<<"Wrong password"<<endl;
        }
    }
    //flag==0 if user's ID is not present in the stored data,
    if(flag==0)
        cout<<"Wrong ID"<<endl;
    else
        LoginHistory(n,i);
}
void Login::Semester1ICT(int n)
{
    char filename[] = "sem1.txt";
    Check_n_Display(filename,n,1);
}

void Login::Semester2ICT(int n)
{
    char filename[] = "sem2.txt";
    Check_n_Display(filename,n,2);
}

void Login::Semester3ICT(int n)
{
    char filename[] = "sem3.txt";
    Check_n_Display(filename,n,3);
}

void Login::Semester4ICT(int n)
{
    char filename[] = "sem4.txt";
    Check_n_Display(filename,n,4);
}

void Login::Semester5ICT(int n)
{
    char filename[] = "sem5.txt";
    Check_n_Display(filename,n,5);
}

void Login::Semester6ICT(int n)
{
    char filename[] = "sem6.txt";
    Check_n_Display(filename,n,6);
}

void Login::Semester7ICT(int n)
{
    char filename[] = "sem7.txt";
    Check_n_Display(filename,n,7);
}

void Login::Semester8ICT(int n)
{
    char filename[] = "sem8.txt";
    Check_n_Display(filename,n,8);
}

void Login::ShowData(int ID,string Password,string FirstName,string LastName,string Email)
{
    cout<<"\nStudent ID : "<<ID<<endl;
    cout<<"Password : "<<Password<<endl;
    cout<<"Name : "<<FirstName<<' '<<LastName<<endl;
    cout<<"Email Address : "<<Email<<endl<<endl;
}

void Login::LoginHistory(int id, int sem_number)
{
    int id_temp[2],sem_temp[2],i=0,flag=0;
    int idtemp,semtemp;
    ifstream log("log_his.txt");
    //storing data of last two logins
    while(log>>idtemp>>semtemp){
        id_temp[i] = idtemp;
        sem_temp[i] = semtemp;
        i++;
        flag++;
        if(i>1)
            break;
    }
    //adding data of user who recently logged in followed by previous two logins
    ofstream lognew;
    lognew.open("log_his.txt",ios::trunc);
    lognew<<id<<' '<<sem_number<<endl;
    switch(flag)
    {
        case 0:
            break;
        case 1:
            lognew<<id_temp[0]<<' '<<sem_temp[0]<<endl;
            break;
        case 2:
            lognew<<id_temp[0]<<' '<<sem_temp[0]<<endl;
            lognew<<id_temp[1]<<' '<<sem_temp[1]<<endl;
    }
}
