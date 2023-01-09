#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    int mWidth;
    int mLength;

public:
    Rectangle(int width, int length);
    int getPerimeter() 
    {
        return (2*mWidth) + (2*mLength);
    }
    int getArea()
    {
        return mWidth*mLength;
    }
};

Rectangle::Rectangle(int width, int length) 
{
    mWidth = width;
    mLength = length;
}

#endif