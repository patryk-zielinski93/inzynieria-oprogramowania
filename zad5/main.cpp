#include <iostream>
#include "Shape.h"
#include "Sphere.h"
#include "Box.h"

int main() {
    // po zaimplementowaniu klasy Vector3D:
    Vector3D v(1.f, 2.f);
    cout << v << endl;
    v += Vector3D(1.f, 3.f, 8.f);
    cout << v << endl;
    v *= 0.5f;
    cout << v << endl;
    cout << endl;

    // po zaimplementowaniu klasy Shape:
    // nie kompiluje sie:
    // Shape s();
    Sphere s;
    cout << s << endl;
    s.move(Vector3D(3.f, 5.f, 6.f));
    cout << s << endl;
    s.scale(3.f);
    cout << s << endl;
    cout << endl;

    // po zaimplementowaniu klasy Box:
    Box b(Vector3D(1.f, 3.f, 4.f), Vector3D(4.f, 2.f, 1.f));
    cout << b << endl;
    b.move(Vector3D(-1.f, 0.f, 1.f));
    cout << b << endl;
    b.scale(.5f);
    cout << b << endl;
}
