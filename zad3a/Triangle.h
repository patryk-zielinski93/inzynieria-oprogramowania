//
// Created by patryk on 18.03.18.
//
#include <iostream>
#include "Vertex.h"

using namespace std;

#ifndef ZAD3_TRIANGLE_H
#define ZAD3_TRIANGLE_H


class Triangle {
public:
    Vertex a, b, c;

    Triangle(Vertex a = Vertex(0, 0), Vertex b = Vertex(0, 0), Vertex c = Vertex(0, 0));

    friend ostream &operator<<(ostream &ostrm, const Triangle &v);

    double perimeter();

    Vertex centroid();

    void move(Vertex &v);

    double area();
};


#endif //ZAD3_TRIANGLE_H
