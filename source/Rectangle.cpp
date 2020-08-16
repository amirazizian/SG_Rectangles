#include "Rectangle.hpp"
using namespace std;

Rectangle::Rectangle(Point2D startingPoint, float width, float length)
{
    bottomLeftCorner = Point2D(startingPoint);
    bottomRightCorner = Point2D(startingPoint.getX() + width, startingPoint.getY());
    topLeftCorner = Point2D(startingPoint.getX(), startingPoint.getY() + length);
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

Point2D Rectangle::GetTopLeftCorner()
{
    return topLeftCorner;
}