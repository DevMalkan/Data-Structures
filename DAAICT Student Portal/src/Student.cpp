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

int Student::getID()
{
    cout<<"Enter your student ID"<<endl;
    cin>>ID;
    return ID;
}

string Student::getPassword()
{
    cout<<"Enter password (8 characters)"<<endl;
    cin>>Password;
    return Password;
}

string Student::getFirstName()
{
    cout<<"Enter First Name"<<endl;
    cin>>FirstName;
    while(FirstName.length()!=10){
        FirstName = FirstName + " ";
    }
    return FirstName;
}

string Student::getLastName()
{
    cout<<"Enter Last Name"<<endl;
    cin>>LastName;
    while(LastName.length()!=10){
        LastName = LastName + " ";
    }
    return LastName;
}

string Student::getEmail()
{
    cout<<"Enter email address"<<endl;
    cin>>Email;
    while(Email.length()!=25){
        Email = Email + " ";
    }
    return Email;
}
