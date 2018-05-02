//
// Created by patryk on 02.05.18.
//
#include <iostream>
#include "ListItem.h"

using namespace std;

#ifndef ZAD8_LIST_H
#define ZAD8_LIST_H


class List {
public:
    ListItem *head = nullptr;

    List();

    ListItem *getLastItem();

    ~List();

    friend ostream &operator<<(ostream &ostrm, const List &list);

    void push_back(Shape *value);

    void clear();

    Shape **back();

    bool pop_back();
};


#endif //ZAD8_LIST_H
