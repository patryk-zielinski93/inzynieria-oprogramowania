//
// Created by patryk on 18.03.18.
//

#include "Vector2D.h"

Vector2D::Vector2D(float x, float y) : x(x), y(y) {}

ostream &operator<<(ostream &ostrm, const Vector2D &v) {
    return ostrm << "[" << v.x << ", " << v.y << "]";
}

Vector2D Vector2D::operator+(const Vector2D &v) {
    return {x + v.x, y + v.y};
}

Vector2D Vector2D::operator-(const Vector2D &v) {
    return {x - v.x, y - v.y};
}

Vector2D Vector2D::operator*(const float &n) {
    return {n * x, n * y};
}


