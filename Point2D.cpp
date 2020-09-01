#include "Point2D.hpp"

Point2D::Point2D(double x1, double y1)
{
    x = x1;
    y = y1;
}

Point2D::Point2D(const Point2D& a)
{
    x = a.x;
    y = a.y;
}

Point2D::~Point2D()
{

}

double Point2D::Norm()
{
    return sqrt((x*x) + (y*y));
}

Point2D Point2D::operator+(Point2D& a)
{
    return Point2D(Getx() + a.Getx(), y + a.Gety());
}

Point2D Point2D::operator-(Point2D& a)
{
    return Point2D(Getx() - a.Getx(), y - a.Gety());
}
