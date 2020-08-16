#include <gtest/gtest.h>
#include "../source/Rectangle.hpp"
using namespace std;

struct RectangleTests : public ::testing::Test
{
    Rectangle* rectangle;

    virtual void SetUp() override
    {
        Point2D startingPoint = Point2D(2.6, 3.7);
        rectangle = new Rectangle(startingPoint, 5.7, 6.8);
    }

    virtual void TearDown() override 
    {
        delete rectangle;
    }
};

TEST_F(RectangleTests, ConstructorShouldSetBottomLeftCorner)
{
    Point2D bottomLeftCorner = rectangle -> GetBottomLeftCorner();
    ASSERT_FLOAT_EQ(2.6, bottomLeftCorner.getX());
    ASSERT_FLOAT_EQ(3.7, bottomLeftCorner.getY());
}

TEST_F(RectangleTests, ConstructorShouldSetBottomRightCorner)
{
    Point2D bottomRightCorner = rectangle -> GetBottomRightCorner();
    ASSERT_FLOAT_EQ(8.3, bottomRightCorner.getX());
    ASSERT_FLOAT_EQ(3.7, bottomRightCorner.getY());
}

TEST_F(RectangleTests, ConstructorShouldSetTopLeftCorner)
{
    Point2D topLeftCorner = rectangle -> GetTopLeftCorner();
    ASSERT_FLOAT_EQ(2.6, topLeftCorner.getX());
    ASSERT_FLOAT_EQ(10.5, topLeftCorner.getY());
}

TEST_F(RectangleTests, ConstructorShouldSetTopRightCorner)
{
    Point2D topRightCorner = rectangle -> GetTopRightCorner();
    ASSERT_FLOAT_EQ(8.3, topRightCorner.getX());
    ASSERT_FLOAT_EQ(10.5, topRightCorner.getY());
}

TEST_F(RectangleTests, CopyConstructorShouldSetSameGetBottomLeftCorner)
{
    Rectangle copy = Rectangle(*rectangle);
    ASSERT_TRUE(copy.GetBottomLeftCorner() == rectangle -> GetBottomLeftCorner());
}

TEST_F(RectangleTests, CopyConstructorShouldSetSametBottomRightCorner)
{
    Rectangle copy = Rectangle(*rectangle);
    ASSERT_TRUE(copy.GetBottomRightCorner() == rectangle -> GetBottomRightCorner());
}

TEST_F(RectangleTests, CopyConstructorShouldSetSameTopLeftCorner)
{
    Rectangle copy = Rectangle(*rectangle);
    ASSERT_TRUE(copy.GetTopLeftCorner() == rectangle -> GetTopLeftCorner());
}

TEST_F(RectangleTests, CopyConstructorShouldSetSameTopRightCorner)
{
    Rectangle copy = Rectangle(*rectangle);
    ASSERT_TRUE(copy.GetTopRightCorner() == rectangle -> GetTopRightCorner());
}