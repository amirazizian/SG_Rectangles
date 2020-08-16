#include "Rectangle.hpp"
using namespace std;

Rectangle::Rectangle(Point2D startingPoint, float width, float length)
{
    bottomLeftCorner = Point2D(startingPoint);
    bottomRightCorner = Point2D(startingPoint.getX() + width, startingPoint.getY());
}

Rectangle::~Rectangle()
{
}

Point2D Rectangle::GetBottomLeftCorner()
{
    return bottomLeftCorner;
}

Point2D Rectangle::GetBottomRightCorner()
{
    return bottomRightCorner;
}