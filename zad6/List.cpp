//
// Created by patryk on 29.04.18.
//

#include "List.h"


List::List() {}

ostream &operator<<(ostream &ostrm, const List &list) {
    ostrm << "lista: ";

    if (list.head == nullptr) {
        return ostrm;
    }

    ListItem *i = list.head;

    ostrm << i << ", ";

    while (i->next) {
        i = i->next;
        ostrm << i << ", ";
    }

    return ostrm;
}

void List::push_back(int value) {
    if (head == nullptr) {
        head = new ListItem(value);
    } else {
        ListItem *i = head;

        while (i->next != nullptr) {
            i = i->next;
        }

        i->next = new ListItem(value);
    }
}

void List::clear() {
    delete head;
    head = nullptr;
}

List::~List() {
    if (head != nullptr) {
        clear();
    }
}
