//
// Created by patryk on 02.05.18.
//

#include "List.h"

List::List() {}

ListItem *List::getLastItem() {
    if (head == nullptr) {
        return nullptr;
    }

    ListItem *i = head;

    while (i->next != nullptr) {
        i = i->next;
    }

    return i;
}

ostream &operator<<(ostream &ostrm, const List &list) {
    ostrm << "lista: ";

    if (list.head == nullptr) {
        return ostrm;
    }

    ListItem *i = list.head;

    ostrm << *i->value << ", ";

    while (i->next) {
        i = i->next;
        ostrm << *i->value << ", ";
    }

    return ostrm;
}

void List::push_back(Shape *value) {
    ListItem *i = getLastItem();

    if (i == nullptr) {
        head = new ListItem(value);
    } else {
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

Shape **List::back() {
    ListItem *i = getLastItem();

    if (i == nullptr) {
        return nullptr;
    }

    return &i->value;
}

bool List::pop_back() {
    if (head == nullptr) {
        return true;
    }

    if (head->next == nullptr) {
        clear();
        return false;
    }

    ListItem *i = head;

    while (i->next->next != nullptr) {
        i = i->next;
    }

    delete i->next;
    i->next = nullptr;

    return false;
}