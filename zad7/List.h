//
// Created by patryk on 02.05.18.
//
#include <iostream>
#include "ListItem.h"

using namespace std;

#ifndef ZAD7_LIST_H
#define ZAD7_LIST_H


class List {
public:
    ListItem *head = nullptr;

    List();

    ListItem *getLastItem();

    ~List();

    friend ostream &operator<<(ostream &ostrm, const List &list);

    void push_back(int value);

    void clear();

    int *back();

    bool pop_back();
};


#endif //ZAD7_LIST_H
