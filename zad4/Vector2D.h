//
// Created by patryk on 18.03.18.
//
#include <ostream>

using namespace std;

#ifndef ZAD4_VECTOR2D_H
#define ZAD4_VECTOR2D_H


class Vector2D {
private:
    float x, y;

public:
    Vector2D(float x = 0, float y = 0);

    friend ostream &operator<<(ostream &ostrm, const Vector2D &v);

    Vector2D operator+(const Vector2D &v);

    Vector2D operator-(const Vector2D &v);

    Vector2D operator*(const float &n);
};


#endif //ZAD4_VECTOR2D_H
