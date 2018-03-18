#include <iostream>
#include "Vertex.h"
#include "Triangle.h"
#include "EquilateralTriangle.h"

int main() {
    Vertex center;
    EquilateralTriangle t(center, 5);

    cout << t << endl;

    cout << "Pole: " << t.area() << endl;

    Vertex m(1, 0);
    t.move(m);
    cout << t << endl;

    cout << "Pole: " << t.area() << endl;

    return 0;
}