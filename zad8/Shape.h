//
// Created by patryk on 02.05.18.
//

#ifndef ZAD8_SHAPE_H
#define ZAD8_SHAPE_H


#include "Vector3D.h"

class Shape {
protected:
    Vector3D position;
public:
    explicit Shape(Vector3D v = {0, 0});

    friend ostream &operator<<(ostream &ostrm, const Shape &s);

    void move(const Vector3D &v);

    virtual void scale(float f);
};


#endif //ZAD8_SHAPE_H
