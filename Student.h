#ifndef STUDENT_H
#define STUDENT_H

using namespace std;
#include "Person.h"

class Student : public Person
{
    public:
        Student();
        Student(string first, string last, int day, int month, int year, string major, double GPA);

        string getMajor()const;
        double getGPA()const;
        void setMajor(string decision);
        void setGPA(double update);

    protected:
        string major;
        double GPA;

    //private:
};

#endif // STUDENT_H
