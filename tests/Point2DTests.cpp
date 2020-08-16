#include<gtest/gtest.h>
#include "../source/Point2D.hpp"

struct Point2DTests : public ::testing::Test
{
    Point2D* point;

    virtual void SetUp() override
    {
        point = new Point2D(2.7f, 4.8f);
    }

    virtual void TearDown() override 
    {
        delete point;
    }
};

TEST_F(Point2DTests, ConstructorShouldInitiateX)
{
    ASSERT_EQ(2.7f, point -> getX());
}

TEST_F(Point2DTests, ConstructorShouldInitiateY)
{
    ASSERT_EQ(4.8f, point -> getY());
}

TEST_F(Point2DTests, CopyConstructorShouldInitiateSameX)
{
    Point2D actual = Point2D(*point);
    ASSERT_EQ(point -> getX(), actual.getX());
}

TEST_F(Point2DTests, CopyConstructorShouldInitiateSameY)
{
    Point2D actual = Point2D(*point);
    ASSERT_EQ(point -> getY(), actual.getY());
}