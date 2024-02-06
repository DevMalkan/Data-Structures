#ifndef ICT_H
#define ICT_H

#include <Student.h>

class ICT : public Student
{
     public:
        //functions for getting data of new student and storing it sorted in ascending order in respective files
        void Semester1();
        void Semester2();
        void Semester3();
        void Semester4();
        void Semester5();
        void Semester6();
        void Semester7();
        void Semester8();
        void DataStoring(char* ,char*);
};

#endif // ICT_H
