#include "Point2D.hpp"

Point2D::Point2D(float x)
{
    this -> x = x; 
}

Point2D::~Point2D(){}

float Point2D::getX()
{
    return x;
}