#include "Point2D.hpp"
#include "Edge.hpp"

using namespace std;

class Poligon
{
    private:
    vector<Point2D*> points;
    vector<Edge*> edges;

    public:
    Poligon(){};
    Poligon(const Poligon&);
    ~Poligon();

    Point2D* GetPoint(unsigned int);
    Edge* GetEdge(unsigned int);

    unsigned int NumberOfPoint(){return points.size();}
    unsigned int NumberOfEdge(){return edges.size();}

    double Perimetro();
    double Area();
    
};