//
// Created by patryk on 29.04.18.
//
#include <iostream>

using namespace std;

#ifndef ZAD6_LISTITEM_H
#define ZAD6_LISTITEM_H


class ListItem {
public:
    int value;
    ListItem *next = nullptr;

    ListItem(int value, ListItem *next = nullptr);

    ~ListItem();

    friend ostream &operator<<(ostream &ostrm, const ListItem *listItem);
};


#endif //ZAD6_LISTITEM_H
