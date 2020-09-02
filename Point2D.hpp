#ifndef POINT
#define POINT

#include <math.h>
#include "Edge.hpp"
#include "Poligon.hpp"

class Point2D
{
    private:
    double x;
    double y;
    std::vector<Edge*> edges;
    std::vector<Poligon*> polis;

    public:
    Point2D();
    Point2D(double xi, double yi);
    Point2D(const Point2D &);
   	~Point2D();
    
    double Getx(){return x;}
    double Gety(){return y;}
    
    void Setx(double x1){x = x1;};
	void Sety(double y1){y = y1;};

    double Norm();

    Point2D operator+(Point2D &);
    Point2D operator-(Point2D &);

};
#endif