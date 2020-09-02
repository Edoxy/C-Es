#ifndef POLI
#define POLI

#include "Edge.hpp"

using namespace std;

class Poligon
{
    private:
    vector<Point2D*> points;
    vector<Edge*> edges;
    bool IsConvex = false;

    public:
    Poligon(){};
    Poligon(int);//numero di vertici del poligono
    Poligon(const Poligon&);
    ~Poligon();

    Point2D* GetPoint(unsigned int);
    Edge* GetEdge(unsigned int);

    void AddPoint(Point2D* a){points.push_back(a);};
    void AddEdge(Edge* a){edges.push_back(a);};

    int NumberOfPoint(){return points.size();};
    int NumberOfEdge(){return edges.size();};

    double Perimetro();
    double Area();
    
};
#endif