//
// Created by patryk on 03.05.18.
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

Vector3D &Vector3D::operator+=(const Vector3D &translate) {
    x = x + translate.x;
    y = y + translate.y;
    z = z + translate.z;

    return *this;
}

Vector3D &Vector3D::operator*=(const float &scale) {
    x = x * scale;
    y = y * scale;
    z = z * scale;

    return *this;
}
