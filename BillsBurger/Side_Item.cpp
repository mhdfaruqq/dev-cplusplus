#include <iostream>
#include <string>
#include "Side_Item.h"

using namespace std;

Side_Item::Side_Item() {
    type = "Fries";
    price = 1.15;
}

Side_Item::Side_Item(string &type_val)
    :type(type_val) {

}

double Side_Item::get_side_price() {
    return price;
}

string Side_Item::get_side_type() {
    return type;
}

void Side_Item::side_setter(std::string type_val) {
    type = type_val;

    if (type_val == "fries")
        price = 1.15;
    else if (type_val == "salad")
        price = 1.99;
    else if (type_val == "barbecue")
        price = 2.15;
    else if (type_val == "veggies")
        price = 1.00;
}