//
// Created by patryk on 03.05.18.
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

    ListItem *i = list.head;

    while (i != nullptr) {
        ostrm << *i->value << ", ";
        i = i->next;
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

void List::print() {
    cout << "list {" << endl;

    ListItem *i = head;

    while (i != nullptr) {
        i->value->print();
        i = i->next;
    }

    cout << "}" << endl;
}

void List::moveAll(Vector3D v) {
    ListItem *i = head;

    while (i != nullptr) {
        i->value->move(v);
        i = i->next;
    }
}

void List::scaleAll(float f) {
    ListItem *i = head;

    while (i != nullptr) {
        i->value->scale(f);
        i = i->next;
    }
}
