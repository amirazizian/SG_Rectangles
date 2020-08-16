#include "Point2D.hpp"

Point2D::Point2D(float x, float y)
{
    this -> x = x; 
    this -> y = y;
}

Point2D::~Point2D(){}

float Point2D::getX()
{
    return x;
}

float Point2D::getY()
{
    return y;
}