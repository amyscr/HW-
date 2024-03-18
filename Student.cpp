#include "Student.h"

Student::Student() : Person(), major(""), GPA(0){}

Student::Student(string first, string last, int day, int month, int year, string maj, double gpa): Person(first, last, day, month, year), major(maj), GPA(gpa){}

string Student::getMajor()const{return major;}
double Student::getGPA()const{return GPA;}

void Student::setMajor(string decision){major = decision;}
void Student::setGPA(double update){GPA = update;}
