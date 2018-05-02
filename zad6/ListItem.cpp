//
// Created by patryk on 29.04.18.
//

#include "ListItem.h"

ListItem::ListItem(int value, ListItem *next) : value(value), next(next) {}

ListItem::~ListItem() {
    cout << "delete: " << value << endl;

    if (next != nullptr) {
        delete next;
    }
}

ostream &operator<<(ostream &ostrm, const ListItem *listItem) {
    return ostrm << listItem->value;
}
