#include<gtest/gtest.h>
#include "../source/Point2D.hpp"
using namespace std;

struct Point2DTests : public ::testing::Test
{
    Point2D* point;

    virtual void SetUp() override
    {
        point = new Point2D(2.7, 4.8);
    }

    virtual void TearDown() override 
    {
        delete point;
    }
};

TEST_F(Point2DTests, ConstructorShouldInitiateX)
{
    ASSERT_FLOAT_EQ(2.7, point -> getX());
}

TEST_F(Point2DTests, ConstructorShouldInitiateY)
{
    ASSERT_FLOAT_EQ(4.8, point -> getY());
}

TEST_F(Point2DTests, CopyConstructorShouldInitiateSameX)
{
    Point2D actual = Point2D(*point);
    ASSERT_FLOAT_EQ(point -> getX(), actual.getX());
}

TEST_F(Point2DTests, CopyConstructorShouldInitiateSameY)
{
    Point2D actual = Point2D(*point);
    ASSERT_FLOAT_EQ(point -> getY(), actual.getY());
}