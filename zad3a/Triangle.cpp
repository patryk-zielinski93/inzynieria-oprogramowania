//
// Created by patryk on 18.03.18.
//

#include "Triangle.h"

Triangle::Triangle(Vertex a, Vertex b, Vertex c) : a(a), b(b), c(c) {}

ostream &operator<<(ostream &ostrm, const Triangle &t) {
    return ostrm << t.a << ", " << t.b << ", " << t.c << endl;
}

double Triangle::perimeter() {
    return a.length(b) + b.length(c) + c.length(a);
}

Vertex Triangle::centroid() {
    double x = (a.x + b.x + c.x) / 3;
    double y = (a.y + b.y + c.y) / 3;
    return {x, y};
}

void Triangle::move(Vertex &v) {
    a = a + v;
    b = b + v;
    c = c + v;
}

double Triangle::area() {
    return perimeter() / 2;
}
