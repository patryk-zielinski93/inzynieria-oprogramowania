//
// Created by patryk on 03.05.18.
//

#ifndef ZAD9_LISTITEM_H
#define ZAD9_LISTITEM_H


#include "Shape.h"

class ListItem {
public:
    Shape *value;
    ListItem *next = nullptr;

    ListItem(Shape *value, ListItem *next = nullptr);

    ~ListItem();

    friend ostream &operator<<(ostream &ostrm, const ListItem *listItem);
};


#endif //ZAD9_LISTITEM_H
