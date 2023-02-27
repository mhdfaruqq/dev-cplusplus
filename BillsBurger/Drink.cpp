#include<iostream>
#include<string>
#include "Drink.h"

using namespace std;

Drink::Drink() {
    type = "Coke";
    size = "SMALL";
    price = 1.50;
}


Drink::Drink(string &type, string &size)
        : type{type}, size{size} {

}

string Drink::get_drink_size() {
    return size;
}

string Drink::get_drink_type() {
    return type;
}

double Drink::get_drink_price() {
    return price;
}

void Drink::drink_setter(std::string type_val) {

    type = type_val;
    if (size == "SMALL")
        price = 1.50;
    else if (size == "MEDIUM")
        price = 2.50;
    else
        price = 3.50;

}