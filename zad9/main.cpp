#include <iostream>
#include "Vector3D.h"
#include "Sphere.h"
#include "Box.h"
#include "List.h"

int main() {
    List list;
    list.push_back(new Sphere(Vector3D()));
    list.push_back(new Box(Vector3D(1.f, 2.f, 3.f), Vector3D(-1.f, 1.f, 5.f)));
    list.push_back(new Sphere(Vector3D(5.f), 7.f));
    list.print();
    list.moveAll(Vector3D(2, 2));
    list.print();
    list.scaleAll(3);
    list.print();
}
