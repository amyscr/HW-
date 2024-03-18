#include "Professor.h"

Professor::Professor(): Employee(), profession(""){}
Professor::Professor(string first, string last, int day, int month, int year, double wage, string subject): Employee(first, last,day,month,year,wage), profession(subject){}

string Professor::getProfession() const{return profession;}
void Professor::setProfession(string assignment){profession = assignment;}
