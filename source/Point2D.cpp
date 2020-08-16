#include "Point2D.hpp"
using namespace std;

Point2D::Point2D()
{
    x = 0.0f;
}

Point2D::Point2D(float x, float y)
{
    this -> x = x; 
    this -> y = y;
}

Point2D::Point2D(const Point2D & p){
    x = p.x;
    y = p.y;
}

Point2D::~Point2D(){}

bool Point2D::operator== (const Point2D& rhs)
{
    return x == rhs.x && y == rhs.y;
}

float Point2D::getX()
{
    return x;
}

float Point2D::getY()
{
    return y;
}