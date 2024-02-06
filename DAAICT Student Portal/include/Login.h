#ifndef LOGIN_H
#define LOGIN_H
using namespace std;

class Login
{
    public:
        //Check ID-Password of user and display data if entered credentials are correct
        void Semester1ICT(int);
        void Semester2ICT(int);
        void Semester3ICT(int);
        void Semester4ICT(int);
        void Semester5ICT(int);
        void Semester6ICT(int);
        void Semester7ICT(int);
        void Semester8ICT(int);
        void ShowData(int,string,string,string,string);
        //store display 3 latest logins using queue(FIFO) concept
        void LoginHistory(int, int);
        void Check_n_Display(char*, int, int);
};

#endif // LOGIN_H
