#include <iostream>
#include <string>
#include "Burger.h"

using namespace std;

Burger::Burger() {
    name = "Cheese Burger";
    price = 3.00;
}

Burger::Burger(string name_val, string type_val)
    : name(name_val), type(type_val) {

}

double Burger::get_burger_price() {
    return price;
}

string Burger::get_burger_name() {
    return name;
}

string Burger::get_burger_toppings() {
    return toppings;
}

void Burger::toppings_by_type(std::string toppings_val) {
    double topping_price = 0;

    if (toppings_val == "Onions")
        topping_price = 0.50;
    else if (toppings_val == "Cheese")
        topping_price = 0.70;
    else if (toppings_val == "Pickle")
        topping_price = 0.65;

    price += topping_price;

}


void Burger::set_toppings(std::string toppings_val) {

    toppings = toppings_val;
    double topping_price = 0;

    if (!toppings_val.empty()) {
        if (type == "SIMPLE")
            toppings_by_type(toppings_val);

        else if (type == "DELUXE") {
            toppings_by_type(toppings_val);

            if (toppings_val == "Mustard")
                topping_price = 0.60;
            else if (toppings_val == "Tomatoes")
                topping_price = 0.30;
        }

    } else {
        topping_price = 0;
    }

    price += topping_price;

}




void Burger::burger_setter(std::string name_val, string toppings_val) {

    double burger_price = 0;
    string toppings_checker = ((!toppings_val.empty()) ? toppings_val : " ");

    if (name_val == "Cheese Burger") {
        set_toppings(toppings_checker);
        burger_price = 3.00;

    } else if (name_val == "Onion Burger") {
        set_toppings(toppings_checker);
        burger_price = 2.70;

    } else if (name_val == "Chili Burger") {
        set_toppings(toppings_checker);
        burger_price = 2.90;

    } else if (name_val == "Aussie Burger") {
        set_toppings(toppings_checker);
        burger_price = 3.70;

    }

    price += burger_price;
}

