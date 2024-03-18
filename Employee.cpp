#include "Employee.h"

Employee::Employee(): Person(), hourlyWage(0)
{ /*
    Fname = "";
    Lname = "";
    birthDay = 1;
    birthMonth = 1;
    birthYear = 1;
    */
}

Employee::Employee(string first, string last, int day, int month, int year, double wage): Person(first, last, day, month, year), hourlyWage(wage)
{ /*
    Fname = first;
    Lname = last;
    birthDay = day;
    birthMonth = month;
    birthYear = year;
    */
}

double Employee::getWage() const{return hourlyWage;}
void Employee::setWage(double update){hourlyWage = update;}
