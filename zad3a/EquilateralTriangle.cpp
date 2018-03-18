//
// Created by patryk on 18.03.18.
//

#include <cmath>
#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(Vertex &center, double sideLength) : sideLength(sideLength) {
    double r = sideLength * sqrt(3) / 3;
    a = Vertex(center.x, center.y + r);
    b = Vertex(center.x + sqrt(3) * r / 2, center.y - r / 2);
    c = Vertex(center.x - sqrt(3) * r / 2, center.y - r / 2);
}
