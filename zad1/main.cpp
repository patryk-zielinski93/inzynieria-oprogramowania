#include <iostream>
#include "Complex.h"

using namespace std;

int main(int, char *) {
    Complex c1(2);
    Complex c2(3, 1);
    auto c3 = c1 + c2;
    float a, b;

    c3.get2(a, b);

    cout << a << ", " << b << endl;

    cout << c3.get().r << " " << c3.get().i << endl;
    cout << c3 << endl;
    return 0;
}
