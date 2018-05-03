//
// Created by patryk on 03.05.18.
//

#ifndef ZAD9_LIST_H
#define ZAD9_LIST_H


#include "ListItem.h"

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

    void print();

    void moveAll(Vector3D v);

    void scaleAll(float f);
};


#endif //ZAD9_LIST_H
