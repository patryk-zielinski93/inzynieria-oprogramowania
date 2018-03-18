//
// Created by patryk on 18.03.18.
//

#ifndef ZAD4_SHAPE_H
#define ZAD4_SHAPE_H


#include "Vector2D.h"

class Shape {
protected:
    Vector2D position;
public:
    explicit Shape(Vector2D v = {0, 0});

    friend ostream &operator<<(ostream &ostrm, const Shape &s);

    virtual void move(const Vector2D &v);
};


#endif //ZAD4_SHAPE_H
