//
// Created by patryk on 03.05.18.
//

#ifndef ZAD9_BOX_H
#define ZAD9_BOX_H


#include "Vector3D.h"
#include "Shape.h"

class Box : public Shape {
private:
    Vector3D size;
public:
    Box(Vector3D v = {0, 0, 0}, Vector3D v2 = {0, 0, 0});

    friend ostream &operator<<(ostream &ostrm, const Box &b);

    void scale(float f) override;

    void print() override;
};


#endif //ZAD9_BOX_H
