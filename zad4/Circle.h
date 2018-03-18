//
// Created by patryk on 18.03.18.
//

#ifndef ZAD4_CIRCLE_H
#define ZAD4_CIRCLE_H


#include "Shape.h"

class Circle : public Shape {
private:
    float radius;
public:
    explicit Circle(Vector2D v = {0, 0}, float radius = 1);

    void move(const Vector2D &v);

    friend ostream &operator<<(ostream &ostrm, const Circle &c);
};


#endif //ZAD4_CIRCLE_H
