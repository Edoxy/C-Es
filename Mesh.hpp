#include <vector>
#include "Point2D.hpp"
#include "Edge.hpp"
#include "Poligon.hpp"

using namespace std;

class Mesh
{
    private:
    vector<Point2D *> point;
    vector<Edge *> edges;
    vector<Poligon *> polis;

}