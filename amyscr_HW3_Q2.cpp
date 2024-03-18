#include <iostream>
#include "Polygon.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Triangle t1(7,9);
    Rectangle r1(4,6);
    t1.draw();

    r1.draw();
    return 0;
}
