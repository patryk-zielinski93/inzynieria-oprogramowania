//
// Created by patryk on 18.02.18.
//
#include <iostream>

struct comp {
    float r;
    float i;
};

using namespace std;

#ifndef ZAD1_COMPLEX_H
#define ZAD1_COMPLEX_H


class Complex {
public:
    float r, i;

    Complex(float r = 0, float i = 0);

    Complex operator+(const Complex &c);

    friend ostream &operator<<(ostream &ostrm, const Complex &c);

    comp get();

    void get2(float &re, float &im);
};


#endif //ZAD1_COMPLEX_H
