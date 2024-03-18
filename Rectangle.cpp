#include "Rectangle.h"
using namespace std;
#include <iostream>

Rectangle::Rectangle(){}
Rectangle::Rectangle(int newWidth, int newHeight)
{
    width = newWidth;
    height = newHeight;
}

int Rectangle::getArea(int newWidth, int newHeight) const
{
    return (newWidth*newHeight);
}
void Rectangle::draw()
{
    for(int h = height; h > 0; h--)
    {
        for(int w = width; w > 0; w--)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}

void Rectangle::setWidth(int newWidth){
    width = newWidth;
}

void Rectangle::setHeight(int newHeight){
    height = newHeight;
}
