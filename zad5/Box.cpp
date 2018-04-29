//
// Created by patryk on 29.04.18.
//

#include "Box.h"

Box::Box(Vector3D v, Vector3D v2) : Shape(v), size(v2) {}

ostream &operator<<(ostream &ostrm, const Box &b) {
    return ostrm << b.position << ", " << b.size;
}

void Box::scale(float f) {
    size *= f;
}
