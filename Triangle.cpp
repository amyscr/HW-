#include "Triangle.h"
using namespace std;
#include <iostream>

Triangle::Triangle(){}
Triangle::Triangle(int newWidth, int newHeight)
{
    width = newWidth;
    height = newHeight;
}

int Triangle::getArea(int newWidth, int newHeight) const
{
    return (newWidth*newHeight/2);
}

void Triangle::draw()
{
    /*
    int vWidth = 1;
    for(int h = height; h > 0; h--)
    {
        for(int s = 0; s < vWidth/2; s++)
        {
            cout<<" ";
        }
        for(int w = 1; w < vWidth; w++)
        {
            cout<<"*";
        }
        vWidth = vWidth + 2;
        cout<<endl;
    }
    */
    int h = height;
    int w = width;
    for(int i = 1; i <= h; ++i)
    {
        for(int j = 1; j < h-i/2; ++j)
        {
            cout<<" ";
        }
        for(int k = 1; k < i; ++k)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void Triangle::setWidth(int newWidth){
    width = newWidth;
}

void Triangle::setHeight(int newHeight){
    height = newHeight;
}
