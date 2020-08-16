#include<gtest/gtest.h>
#include "../source/Point2D.hpp"

TEST(Point2DTests, ConstructorShouldInitiateX)
{
    Point2D* point = new Point2D(2.7f);
    ASSERT_EQ(2.7f, point -> getX());
}