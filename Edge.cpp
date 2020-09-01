#include "Edge.hpp"
#include <math.h>

Edge::Edge()
{
    vertex.push_back(NULL);
    vertex.push_back(NULL);
}

Edge::Edge(Point2D* a, Point2D* b)
{
    vertex.push_back(a);
    vertex.push_back(b);
}

Edge::Edge(const Edge& a)
{
    for(int i = 0; i<2; i++)
    {
        vertex.push_back(a.vertex[i]);
    }
    for(int i = 0; i<a.polis.size(); i++)
    {
        polis.push_back(a.polis[i]);
    }
}

Point2D* Edge::GetPoint(unsigned int pos)
{
    return vertex[pos];
}

Poligon* Edge::GetPoligon(unsigned int pos)
{
    return polis[pos];
}

double Edge::Getx(unsigned int pos)
{
    return vertex[pos]->Getx();
}

double Edge::Gety(unsigned int pos)
{
    return vertex[pos]->Gety();
}

void Edge::SetPoint2D(Point2D * a, Point2D * b)
{
    vertex[0] = a;
    vertex[1] = b;
}

void Edge::AddPoily(Poligon * a)
{
    polis.push_back(a);
}

double Edge::Norm()
{
    return sqrt((Getx(0)-Getx(1))*(Getx(0)-Getx(1)) + (Gety(0)-Gety(1))*(Gety(0)-Gety(1)));
}