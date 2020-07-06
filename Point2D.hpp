#include <math.h>

class Point2D
{
    private:
    double x;
    double y;

    public:
    Point2D();
    Point2D(double xi, double yi);
    Point2D(const Point2D &);
   	~Point2D();
    
    double Getx(){return x;}
    double Gety(){return y;}
    
    void Setx(double);
	void Sety(double);

    double Norm();

    Point2D operator+(Point2D &);
    Point2D operator-(Point2D &);
    void operator+=(Point2D &);

};