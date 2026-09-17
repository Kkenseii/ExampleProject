#include "pch.h"
#include "triangle.h"



TEST(TriangleTest, DefaultConstructor)
{
    Triangle t;
    EXPECT_EQ(t.getSide(), 1.0);
    EXPECT_EQ(t.getHeight(), 1.0);
    EXPECT_EQ(t.calculateArea(), 0.5);
}

TEST(TriangleTest, ParameterizedConstructor)
{
    Triangle t(4.0, 3.0);
    EXPECT_EQ(t.getSide(), 4.0);
    EXPECT_EQ(t.getHeight(), 3.0);
    EXPECT_EQ(t.calculateArea(), 6.0);
}

TEST(TriangleTest, CopyConstructor)
{
    Triangle original(5.0, 2.0);
    Triangle copy(original);
    EXPECT_EQ(copy.getSide(), 5.0);
    EXPECT_EQ(copy.getHeight(), 2.0);
    EXPECT_EQ(copy.calculateArea(), 5.0);
}

TEST(TriangleTest, GetSide)
{
    Triangle t(7.5, 3.0);
    EXPECT_EQ(t.getSide(), 7.5);
}

TEST(TriangleTest, GetHeight)
{
    Triangle t(4.0, 6.5);
    EXPECT_EQ(t.getHeight(), 6.5);
}

TEST(TriangleTest, SetSideValid)
{
    Triangle t;
    t.setSide(7.0);
    EXPECT_EQ(t.getSide(), 7.0);
    EXPECT_EQ(t.calculateArea(), 3.5);
}

TEST(TriangleTest, SetHeightValid)
{
    Triangle t;
    t.setHeight(8.0);
    EXPECT_EQ(t.getHeight(), 8.0);
    EXPECT_EQ(t.calculateArea(), 4.0);
}

TEST(TriangleTest, SetSideAndHeightValid)
{
    Triangle t;
    t.setSideAndHeight(3.0, 4.0);
    EXPECT_EQ(t.getSide(), 3.0);
    EXPECT_EQ(t.getHeight(), 4.0);
    EXPECT_EQ(t.calculateArea(), 6.0);
}

TEST(TriangleTest, CalculateAreaWithIntegers)
{
    Triangle t(10.0, 5.0);
    EXPECT_EQ(t.calculateArea(), 25.0);
}

TEST(TriangleTest, CalculateAreaWithDecimals)
{
    Triangle t(2.5, 4.0);
    EXPECT_EQ(t.calculateArea(), 5.0);
}

TEST(TriangleTest, CalculateAreaWithLargeNumbers)
{
    Triangle t(100.0, 50.0);
    EXPECT_EQ(t.calculateArea(), 2500.0);
}

TEST(TriangleTest, AssignmentOperator)
{
    Triangle t1(3.0, 4.0);
    Triangle t2;
    t2 = t1;

    EXPECT_EQ(t2.getSide(), 3.0);
    EXPECT_EQ(t2.getHeight(), 4.0);
    EXPECT_EQ(t2.calculateArea(), 6.0);
}

TEST(TriangleTest, SelfAssignment)
{
    Triangle t(3.0, 4.0);
    t = t;

    EXPECT_EQ(t.getSide(), 3.0);
    EXPECT_EQ(t.getHeight(), 4.0);
    EXPECT_EQ(t.calculateArea(), 6.0);
}

TEST(TriangleTest, EqualityOperator)
{
    Triangle t1(2.0, 3.0); 
    Triangle t2(3.0, 2.0); 
    Triangle t3(4.0, 2.0); 

    EXPECT_EQ(t1 == t2, true);
    EXPECT_EQ(t1 == t3, false);
}

TEST(TriangleTest, GreaterThanOperator)
{
    Triangle t1(2.0, 3.0); 
    Triangle t2(5.0, 2.0); 

    EXPECT_EQ(t1 > t2, false);
    EXPECT_EQ(t2 > t1, true);
}

TEST(TriangleTest, LessThanOperator)
{
    Triangle t1(2.0, 3.0); 
    Triangle t2(5.0, 2.0); 

    EXPECT_EQ(t1 < t2, true);
    EXPECT_EQ(t2 < t1, false);
}

TEST(TriangleTest, InvalidSideThrowsException)
{
    EXPECT_THROW(Triangle(-1.0, 5.0), std::invalid_argument);
    EXPECT_THROW(Triangle(0.0, 5.0), std::invalid_argument);
}

TEST(TriangleTest, InvalidHeightThrowsException)
{
    EXPECT_THROW(Triangle(5.0, -1.0), std::invalid_argument);
    EXPECT_THROW(Triangle(5.0, 0.0), std::invalid_argument);
}

TEST(TriangleTest, InvalidBothThrowsException)
{
    EXPECT_THROW(Triangle(-1.0, -1.0), std::invalid_argument);
    EXPECT_THROW(Triangle(0.0, 0.0), std::invalid_argument);
}

TEST(TriangleTest, SetSideInvalidThrows)
{
    Triangle t;
    EXPECT_THROW(t.setSide(-1.0), std::invalid_argument);
    EXPECT_THROW(t.setSide(0.0), std::invalid_argument);

    EXPECT_EQ(t.getSide(), 1.0);
}

TEST(TriangleTest, SetHeightInvalidThrows)
{
    Triangle t;
    EXPECT_THROW(t.setHeight(-1.0), std::invalid_argument);
    EXPECT_THROW(t.setHeight(0.0), std::invalid_argument);

    EXPECT_EQ(t.getHeight(), 1.0);
}

TEST(TriangleTest, SetSideAndHeightInvalidSideThrows)
{
    Triangle t;
    EXPECT_THROW(t.setSideAndHeight(-1.0, 5.0), std::invalid_argument);
    EXPECT_THROW(t.setSideAndHeight(0.0, 5.0), std::invalid_argument);

    EXPECT_EQ(t.getSide(), 1.0);
    EXPECT_EQ(t.getHeight(), 1.0);
}

TEST(TriangleTest, SetSideAndHeightInvalidHeightThrows)
{
    Triangle t;
    EXPECT_THROW(t.setSideAndHeight(5.0, -1.0), std::invalid_argument);
    EXPECT_THROW(t.setSideAndHeight(5.0, 0.0), std::invalid_argument);

    EXPECT_EQ(t.getSide(), 1.0);
    EXPECT_EQ(t.getHeight(), 1.0);
}
