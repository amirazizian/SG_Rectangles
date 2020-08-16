#include "Rectangle.hpp"
using namespace std;

Rectangle::Rectangle(float bottomLeftX, float bottomLeftY, float width, float length)
{
    bottomLeftCorner = Point2D(bottomLeftX, bottomLeftY);
}

Rectangle::~Rectangle()
{
}

Point2D Rectangle::GetBottomLeftCorner()
{
    return bottomLeftCorner;
}