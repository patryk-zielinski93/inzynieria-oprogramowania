#include <iostream>
#include "List.h"

int main() {
    List list;
    list.push_back(5);
    list.push_back(7);
    list.push_back(9);
    list.push_back(2);
    cout << list << endl;
    for (int i = 0; i < 3; ++i) {
        int *item = list.back();
        if (item == nullptr)
            cout << "blad - pusta" << endl;
        else
            cout << "zdjete: " << *item << endl;
        cout << "pop back: " << list.pop_back() << endl;
    }
    cout << list << endl;
    list.push_back(21);
    cout << list << endl;
    for (int i = 0; i < 4; ++i) {
        int *item = list.back();
        if (item == nullptr)
            cout << "blad - pusta" << endl;
        else
            cout << "zdjete: " << *item << endl;
        cout << "pop back: " << list.pop_back() << endl;
    }
    cout << list << endl;
}