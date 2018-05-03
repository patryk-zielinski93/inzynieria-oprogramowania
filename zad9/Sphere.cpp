//
// Created by patryk on 03.05.18.
//

#include "Sphere.h"

Sphere::Sphere(Vector3D v, float radius) : Shape(v), radius(radius) {}

void Sphere::scale(float f) {
    radius *= f;
}

ostream &operator<<(ostream &ostrm, const Sphere &s) {
    return ostrm << s.position << ", " << s.radius;
}

void Sphere::print() {
    cout << "Sphere: " << *this << endl;
}
