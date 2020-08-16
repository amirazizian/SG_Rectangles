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
    Point2D copy = Point2D(*point);
    ASSERT_FLOAT_EQ(point -> getX(), copy.getX());
}

TEST_F(Point2DTests, CopyConstructorShouldInitiateSameY)
{
    Point2D copy = Point2D(*point);
    ASSERT_FLOAT_EQ(point -> getY(), copy.getY());
}

TEST_F(Point2DTests, EqualityOperatorShouldReturnFalseWhenXIsNotSameAndYIsSame)
{
    Point2D notEqual = Point2D(0, point -> getY());
    ASSERT_FALSE(notEqual == *point);
}

TEST_F(Point2DTests, EqualityOperatorShouldReturnFalseWhenXIsSameAndYIsNotSame)
{
    Point2D notEqual = Point2D(point -> getX(), 0);
    ASSERT_FALSE(notEqual == *point);
}

TEST_F(Point2DTests, EqualityOperatorShouldReturnFalseWhenBothXAndYAreNotSame)
{
    Point2D notEqual = Point2D(300, 0);
    ASSERT_FALSE(notEqual == *point);
}

TEST_F(Point2DTests, EqualityOperatorShouldReturnTrueWhenBothXAndYAreSame)
{
    Point2D equal = Point2D(point -> getX(), point -> getY());
    ASSERT_TRUE(equal == *point);
}