//
// Created by patryk on 29.04.18.
//

#ifndef ZAD5_SPHERE_H
#define ZAD5_SPHERE_H


#include "Shape.h"

class Sphere : public Shape {
private:
    float radius;
    public:
    friend ostream &operator<<(ostream &ostrm, const Sphere &s);

    Sphere(Vector3D v = {0, 0, 0}, float radius = 1);

    void scale(float f) override;
};


#endif //ZAD5_SPHERE_H
