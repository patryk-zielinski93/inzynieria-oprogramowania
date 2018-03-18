//
// Created by patryk on 29.04.18.
//

#include "Rectangle.h"

Rectangle::Rectangle(Vector2D v, Vector2D v2) : Shape(v), second(v2) {}

ostream &operator<<(ostream &ostrm, const Rectangle &r) {
    return ostrm << r.position << ", " << r.second;
}

void Rectangle::move(const Vector2D &v) {
    Shape::move(v);
    second = second + v;
}
