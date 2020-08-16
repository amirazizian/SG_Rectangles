#include <gtest/gtest.h>
#include "../source/Rectangle.hpp"
using namespace std;

TEST(RectangleTests, ConstructorShouldSetBottomLeftCorner)
{
    Point2D startingPoint = Point2D(2.6, 3.7);
    
    Rectangle rectangle = Rectangle(startingPoint, 5.7, 6.8);
    
    Point2D bottomLeftCorner = rectangle.GetBottomLeftCorner();
    ASSERT_FLOAT_EQ(2.6, bottomLeftCorner.getX());
    ASSERT_FLOAT_EQ(3.7, bottomLeftCorner.getY());
}

TEST(RectangleTests, ConstructorShouldSetBottomRightCorner)
{
    Point2D startingPoint = Point2D(2.6, 3.7);
    
    Rectangle rectangle = Rectangle(startingPoint, 5.7, 6.8);
    
    Point2D bottomRightCorner = rectangle.GetBottomRightCorner();
    ASSERT_FLOAT_EQ(8.3, bottomRightCorner.getX());
    ASSERT_FLOAT_EQ(3.7, bottomRightCorner.getY());
}