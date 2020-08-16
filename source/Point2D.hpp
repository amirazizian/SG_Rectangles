#ifndef Point2D_HPP
#define Point2D_HPP

using namespace std;

class Point2D
{
    public: 
        Point2D();
        Point2D(float x, float y);
        Point2D(const Point2D &p);
        ~Point2D();
        float getX();
        float getY();
    
    private: 
        float x;
        float y;
};

#endif