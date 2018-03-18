#include <iostream>
#include "Vertex.h"
#include "Triangle.h"

int main() {
    cout << "---- Vertex ----" << endl;

    Vertex a(0, 5);
    cout << "a: " << a << endl;
    Vertex b(-5, 0);
    cout << "b: " << b << endl;
    Vertex c(5, 0);
    cout << "c: " << c << endl;

    cout << "a+b=" << a + b << endl;
    cout << "a-b=" << a - b << endl;
    cout << "a*2=" << a * 2 << endl;

    cout << "ab length: " << a.length(b) << endl;
    cout << "bc length: " << b.length(c) << endl;
    cout << "ca length: " << c.length(a) << endl;

    cout << "---- Triangle ----" << endl;

    Triangle t(a, b, c);

    cout << t << endl;
    cout << "perimeter: " << t.perimeter() << endl;
    cout << "centroid: " << t.centroid() << endl;

    return 0;
}