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
    
    void Setx(double x1){x = x1;};
	void Sety(double y1){y = y1;};

    double Norm();

    Point2D operator+(Point2D &);
    Point2D operator-(Point2D &);

};