//
// Created by patryk on 18.03.18.
//

#include <cmath>
#include "Vertex.h"

Vertex::Vertex(double x, double y) : x(x), y(y) {}

ostream &operator<<(ostream &ostrm, const Vertex &v) {
    return ostrm << "[" << v.x << ", " << v.y << "]";
}

Vertex Vertex::operator+(const Vertex &v) {
    return {x + v.x, y + v.y};
}

Vertex Vertex::operator-(const Vertex &v) {
    return {x - v.x, y - v.y};
}

Vertex Vertex::operator*(const double &n) {
    return {n * x, n * y};
}

double Vertex::length(Vertex &v) {
    return sqrt(pow(v.x - x, 2) + pow(v.y - y, 2));
}

