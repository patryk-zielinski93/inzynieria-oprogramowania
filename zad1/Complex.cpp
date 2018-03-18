//
// Created by patryk on 18.02.18.
//

#include "Complex.h"


Complex Complex::operator+(const Complex &c) {
    return Complex(r + c.r, i + c.i);
}

ostream &operator<<(ostream &ostrm, const Complex &c) {
    return ostrm << c.r << "+" << c.i << "i";
}

comp Complex::get() {
    comp c = comp();
    c.r = r;
    c.i = i;
    return c;
}

Complex::Complex(float r, float i) : r(r), i(i) {}

void Complex::get2(float &re, float &im) {
    re = r;
    im = i;
}
