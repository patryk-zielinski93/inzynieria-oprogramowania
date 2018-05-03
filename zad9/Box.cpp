//
// Created by patryk on 03.05.18.
//

#include "Box.h"

Box::Box(Vector3D v, Vector3D v2) : Shape(v), size(v2) {}

ostream &operator<<(ostream &ostrm, const Box &b) {
    return ostrm << b.position << ", " << b.size;
}

void Box::print() {
    cout << "Box: " << *this << endl;
}

void Box::scale(float f) {
    size *= f;
}
