//
// Created by patryk on 18.03.18.
//

#include "Shape.h"

Shape::Shape(Vector3D v) : position(v) {}

ostream &operator<<(ostream &ostrm, const Shape &s) {
    return ostrm << s.position;
}

void Shape::move(const Vector3D &v) {
    position += v;
}
