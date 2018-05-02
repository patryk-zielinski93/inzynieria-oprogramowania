//
// Created by patryk on 02.05.18.
//

#include "ListItem.h"

ListItem::ListItem(int value, ListItem *next) : value(value), next(next) {}

ListItem::~ListItem() {
    delete next;
}

ostream &operator<<(ostream &ostrm, const ListItem *listItem) {
    return ostrm << listItem->value;
}

