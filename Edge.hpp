#include <vector>
#include "Point2D.hpp"
#include "Poligon.hpp"

class Edge
{
    private:
    std::vector<Point2D*> vertex;
	std::vector<Poligon*> polis;
    public:
    Edge(Point2D*, Point2D*);
	Edge();
	Edge(const Edge & );
	~Edge();
	
	Point2D* GetPoint(unsigned int);
	Poligon* GetPoligon(unsigned int);
	double Getx(unsigned int);
	double Gety(unsigned int);

	void SetPoint2D(Point2D *, Point2D *);
	void AddPoily(Poligon *);

	double Norm();
};