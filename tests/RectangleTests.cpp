#include <gtest/gtest.h>
#include "../source/Point2D.hpp"
#include "../source/Rectangle.hpp"

TEST(RectangleTests, ConstructorShouldSetBottomLeftCorner)
{
    Rectangle rectangle = Rectangle(2.6f, 3.7f, 5.7f, 6.8f);
    Point2D bottomLeftCorner = rectangle.GetBottomLeftCorner();
    ASSERT_EQ(2.6f, bottomLeftCorner.getX());
    ASSERT_EQ(3.7f, bottomLeftCorner.getY());
}