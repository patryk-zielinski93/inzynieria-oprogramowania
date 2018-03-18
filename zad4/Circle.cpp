//
// Created by patryk on 18.03.18.
//

#include "Circle.h"

Circle::Circle(Vector2D v, float radius) : Shape(v), radius(radius) {}

ostream &operator<<(ostream &ostrm, const Circle &c) {
    return ostrm << c.position << ", " << c.radius;
}

void Circle::move(const Vector2D &v) {
    position = position + v;
}
