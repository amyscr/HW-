#include "Professor.h"

Professor::Professor(): Employee(), profession("")
{}
Professor::Professor(string first, string last, int day, int month, int year, string subject): Person(first, last, day, month, year), profession(subject)
{}

string Professor::getProfession() const{return profession;}
void Professor::setProfession(string assignment){profession = assignment;}
