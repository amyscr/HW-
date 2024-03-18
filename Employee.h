#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;
#include "Person.h"

class Employee : protected Person
{
    public:
        Employee();
        Employee(string first, string last, int day, int month, int year, double hourlyWage);

        double getWage() const;
        void setWage(double update);

    protected:
        double hourlyWage;

    private:
};

#endif // EMPLOYEE_H
