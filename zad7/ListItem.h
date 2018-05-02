//
// Created by patryk on 02.05.18.
//
#include <iostream>

using namespace std;

#ifndef ZAD7_LISTITEM_H
#define ZAD7_LISTITEM_H


class ListItem {
public:
    int value;
    ListItem *next = nullptr;

    ListItem(int value, ListItem *next = nullptr);

    ~ListItem();

    friend ostream &operator<<(ostream &ostrm, const ListItem *listItem);
};


#endif //ZAD7_LISTITEM_H
