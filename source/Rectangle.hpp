#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Point2D.hpp"

class Rectangle
{
    public: 

        Rectangle(float bottomLeftX, float bottomLeftY, float width, float length);
        ~Rectangle();
        Point2D GetBottomLeftCorner();
    
    private:  

        Point2D bottomLeftCorner;
};

#endif
