#include <vector>
#include "Point2D.hpp"
class Edge
{
    private:
    std::vector<Point2D *> vertex[2];

    public:
    Edge(Point2D *, Point2D *);
	Edge();
	Edge(const Edge & );
	~Edge();
	
	Point2D GetP(int);

	void SetPoint2D(Point2D *, Point2D *);

	float Norm();
};