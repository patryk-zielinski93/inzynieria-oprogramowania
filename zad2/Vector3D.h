//
// Created by patryk on 18.03.18.
//
#include <iostream>

using namespace std;

#ifndef ZAD2_VECTOR3D_H
#define ZAD2_VECTOR3D_H


class Vector3D {
public:
    float x, y, z;

    Vector3D(float x = 0, float y = 0, float z = 0);

    friend ostream &operator<<(ostream &ostrm, const Vector3D &v);

    Vector3D operator+(const Vector3D &v);

    Vector3D operator-(const Vector3D &v);

    Vector3D operator*(const float &n);

    float dot(Vector3D v);
};


#endif //ZAD2_VECTOR3D_H
