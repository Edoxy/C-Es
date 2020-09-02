#include "Poligon.hpp"


Poligon::Poligon(int n)
{
    points.reserve(n);
    edges.reserve(n);
}

Poligon::Poligon(const Poligon& a)
{
    for(unsigned int i = 0; i < a.points.size(); i++)
    {
        points[i] = a.points[i];
    }
    
    for(int i = 0; i< a.edges.size(); i++)
    {
        edges[i] = a.edges[i];
    }
}

Point2D* Poligon::GetPoint(unsigned int pos)
{
    return points[pos];
}

Edge* Poligon::GetEdge(unsigned int pos)
{
    return edges[pos];
}

double Poligon::Perimetro()
{
    double sum = 0;
    for(int i = 0; i < NumberOfEdge(); i++)
    {
        sum += edges[i]->Norm();
    }
    return sum;
}

double Area()
{
    
}