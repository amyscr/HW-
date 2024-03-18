#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "Professor.h"


using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    Student s1("Billie", "Armstrong", 2, 17, 1972, "Music", 3.9);
    cout << s1.getName() << " born on: " << s1.getBirthdate() << endl;

    Employee e1("Jenny", "Jenny", 8, 6, 1975, 309);
    cout << e1.getName() << " born on: " << e1.getBirthdate() << endl;

    Professor t1("Gerard", "Way", 4, 9, 1977, 20, "Art");
    cout << t1.getName() << " born on: " << t1.getBirthdate() << endl;

    return 0;
}
