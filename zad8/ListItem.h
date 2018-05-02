//
// Created by patryk on 02.05.18.
//
#include <iostream>
#include "Shape.h"

using namespace std;

#ifndef ZAD8_LISTITEM_H
#define ZAD8_LISTITEM_H


class ListItem {
public:
    Shape *value;
    ListItem *next = nullptr;

    ListItem(Shape *value, ListItem *next = nullptr);

    ~ListItem();

    friend ostream &operator<<(ostream &ostrm, const ListItem *listItem);
};


#endif //ZAD8_LISTITEM_H
