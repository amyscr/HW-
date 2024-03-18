#ifndef PROFESSOR_H
#define PROFESSOR_H

using namespace std;
#include "Employee.h"

class Professor : protected Employee
{
    public:
        Professor();
        Professor(string first, string last, int day, int month, int year, string profession);

        string getProfession() const;
        void setProfession(string assignment);

    protected:
        string profession;

    private:
};

#endif // PROFESSOR_H
