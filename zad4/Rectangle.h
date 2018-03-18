//
// Created by patryk on 29.04.18.
//

#ifndef ZAD4_RECTANGLE_H
#define ZAD4_RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape {
private:
    Vector2D second;
public:
    explicit Rectangle(Vector2D v = {0, 0}, Vector2D v2 = {0, 0});

    void move(const Vector2D &v);

    friend ostream &operator<<(ostream &ostrm, const Rectangle &r);
};


#endif //ZAD4_RECTANGLE_H
