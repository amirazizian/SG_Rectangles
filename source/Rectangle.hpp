#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Point2D.hpp"
using namespace std;

class Rectangle
{
    public: 

        Rectangle(Point2D startingPoint, float width, float length);
        Rectangle(const Rectangle & r);
        ~Rectangle();
        Point2D GetBottomLeftCorner();
        Point2D GetBottomRightCorner();
        Point2D GetTopLeftCorner();
        Point2D GetTopRightCorner();
    
    private:  

        Point2D bottomLeftCorner;
        Point2D bottomRightCorner;
        Point2D topLeftCorner;
        Point2D topRightCorner;
};

#endif
