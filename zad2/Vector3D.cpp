//
// Created by patryk on 18.02.18.
//

#include "Vector3D.h"

Vector3D::Vector3D(float x, float y, float z) : x(x), y(y), z(z) {}

ostream &operator<<(ostream &ostrm, const Vector3D &v) {
    return ostrm << "[" << v.x << ", " << v.y << ", " << v.z << "]";
}

Vector3D Vector3D::operator+(const Vector3D &v) {
    return {x + v.x, y + v.y, z + v.z};
}

Vector3D Vector3D::operator-(const Vector3D &v) {
    return {x - v.x, y - v.y, z - v.z};
}

Vector3D Vector3D::operator*(const float &n) {
    return {n * x, n * y, n * z};
}

float Vector3D::dot(Vector3D v) {
    return x * v.x + y * v.y + z * v.z;
}
