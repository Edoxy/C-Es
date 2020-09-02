#include <vector>
#include "Point2D.hpp"
#include "Edge.hpp"
#include "Poligon.hpp"

using namespace std;

class Mesh
{
    private:
    vector<Point2D *> points;
    vector<Edge *> edges;
    vector<Poligon *> polis;

};