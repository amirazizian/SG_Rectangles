#include<gtest/gtest.h>
#include "../source/Point2D.hpp"

TEST(Point2DTests, ConstructorShouldInitiateX)
{
    Point2D* point = new Point2D(2.7f, 0.0f);
    ASSERT_EQ(2.7f, point -> getX());
}

TEST(Point2DTests, ConstructorShouldInitiateY)
{
    Point2D* point = new Point2D(2.7f, 4.8f);
    ASSERT_EQ(4.8f, point -> getY());
}