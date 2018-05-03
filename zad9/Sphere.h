//
// Created by patryk on 03.05.18.
//

#ifndef ZAD9_SPHERE_H
#define ZAD9_SPHERE_H


#include "Vector3D.h"
#include "Shape.h"

class Sphere : public Shape {
private:
    float radius;
public:
    friend ostream &operator<<(ostream &ostrm, const Sphere &s);

    Sphere(Vector3D v = {0, 0, 0}, float radius = 1);

    void scale(float f) override;

    void print() override;
};


#endif //ZAD9_SPHERE_H
