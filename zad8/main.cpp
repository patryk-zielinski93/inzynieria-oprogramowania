#include <iostream>
#include "List.h"

int main() {
    List list;
    list.push_back(new Shape());
    list.push_back(new Shape(Vector3D(1.f, 2.f, 3.f)));
    list.push_back(new Shape(Vector3D(5.f)));
    cout << list << endl;
    Shape **s = list.back(); // wskaznik do wskaznika
    while (s != nullptr) {
        cout << "pop: " << **s << endl; // podwojne wyluskanie
        list.pop_back();
        cout << list << endl;
        s = list.back();
    }
}