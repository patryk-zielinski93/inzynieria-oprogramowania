#include <iostream>
#include "List.h"

int main() {
    List list;
    list.push_back(5);
    list.push_back(7);
    list.push_back(9);
    cout << list << endl;
    list.push_back(2);
    list.push_back(21);
    cout << list << endl;
    list.clear();
    cout << list << endl;
    list.push_back(3);
    cout << list << endl;
}