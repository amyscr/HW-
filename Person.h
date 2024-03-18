#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
    public:
        Person();
        Person(string first, string last, int year, int day, int month);
        string getName();
        string getBirthdate();

    private:
        string Fname;
        string Lname;
        int birthDay;
        int birthMonth;
        int birthYear;

    protected:
    /*You may move private members to protected if needed*/


};

#endif // PERSON_H
