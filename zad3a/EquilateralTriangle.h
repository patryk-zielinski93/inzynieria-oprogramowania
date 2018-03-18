//
// Created by patryk on 18.03.18.
//

#ifndef ZAD3_EQUILATERALTRIANGLE_H
#define ZAD3_EQUILATERALTRIANGLE_H


#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    double sideLength;

    EquilateralTriangle(Vertex &center, double sideLength);


};


#endif //ZAD3_EQUILATERALTRIANGLE_H
