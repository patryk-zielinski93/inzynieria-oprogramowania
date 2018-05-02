//
// Created by patryk on 02.05.18.
//
#include <iostream>

using namespace std;

#ifndef ZAD8_VECTOR3D_H
#define ZAD8_VECTOR3D_H


class Vector3D {
public:
    float x, y, z;

    Vector3D(float x = 0, float y = 0, float z = 0);

    friend ostream &operator<<(ostream &ostrm, const Vector3D &v);

    Vector3D operator+(const Vector3D &v);

    Vector3D operator-(const Vector3D &v);

    Vector3D operator*(const float &n);

    Vector3D &operator+=(const Vector3D &translate);

    Vector3D &operator*=(const float &scale);

    float dot(Vector3D v);
};


#endif //ZAD8_VECTOR3D_H
