#include <iostream>
#include "Vector3D.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Vector3D v1(1, 2, 3);
    cout << v1 << endl;

    Vector3D v2 = v1 * 2;
    cout << v2 << endl;

    Vector3D v3 = v2 - v1;
    cout << v3 << endl;

    Vector3D v4 = v2 + v1;
    cout << v4 << endl;

    cout << v1.dot(v2) << endl;

    return 0;
}