//
// Created by patryk on 18.03.18.
//

#include <iostream>

using namespace std;

#ifndef ZAD3_VERTEX_H
#define ZAD3_VERTEX_H


class Vertex {
public:
    double x, y;

    Vertex(double x = 0, double y = 0);

    friend ostream &operator<<(ostream &ostrm, const Vertex &v);

    Vertex operator+(const Vertex &v);

    Vertex operator-(const Vertex &v);

    Vertex operator*(const double &n);

    double length(Vertex &v);
};


#endif //ZAD3_VERTEX_H
