#include "Item.h"
#include <iostream>
using namespace std;

static int Item::totalItems = 0;


Item::Item(string name = "Scrap", int value = 0) {
    this->name = name;
    this->value = value;
}

Item::getTotalItems() {
    return totalItems;
}

Item::incrementTotalItems() {
    totalItems++;
}

Item::string getName() const {
    return name;
}

Item::int getValue() const {
    return value;
}

Item::void display() const {
    cout << "[" << getName() << "]" << " (Value: " << getValue() << ")" << endl;
}