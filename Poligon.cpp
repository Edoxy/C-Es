#include "Poligon.hpp"



Poligon::Poligon(const Poligon& a)
{
    for(int i = 0; i< a.NumberOfPoint(); i++)
    {
        points[i] = a.points[i];
    }
    
    for(int i = 0; i< a.NumberOfEdges(); i++)
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

double Perimetro()
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