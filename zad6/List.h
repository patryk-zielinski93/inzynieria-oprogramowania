//
// Created by patryk on 29.04.18.
//
#include <iostream>

using namespace std;

#ifndef ZAD6_LIST_H
#define ZAD6_LIST_H


#include "ListItem.h"

class List {
public:
    ListItem *head = nullptr;

    List();

    ~List();

    friend ostream &operator<<(ostream &ostrm, const List &list);

    void push_back(int value);

    void clear();
};


#endif //ZAD6_LIST_H
