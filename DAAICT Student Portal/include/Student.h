#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student
{
        int ID;
        string Password,FirstName,LastName,Email;
    public:
        int getID();
        string getPassword();
        string getFirstName();
        string getLastName();
        string getEmail();
};

#endif // STUDENT_H
