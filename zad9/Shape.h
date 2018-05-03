//
// Created by patryk on 03.05.18.
//

#ifndef ZAD9_SHAPE_H
#define ZAD9_SHAPE_H


#include "Vector3D.h"

class Shape {
protected:
    Vector3D position;
public:
    explicit Shape(Vector3D v = {0, 0});

    friend ostream &operator<<(ostream &ostrm, const Shape &s);

    void move(const Vector3D &v);

    virtual void scale(float f) = 0;

    virtual void print() = 0;
};


#endif //ZAD9_SHAPE_H
