#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main() {
    Circle c;
    cout << c << endl;
    Rectangle r(Vector2D(3, 5), Vector2D(6, 7));
    cout << r << endl;
    c.move(Vector2D(2, 5));
    r.move(Vector2D(2, 5));
    cout << c << endl;
    cout << r << endl;
}
