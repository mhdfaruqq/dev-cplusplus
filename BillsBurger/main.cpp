#include <iostream>
#include "Meal_Order.h"


int main() {

    Burger default_burger;
    Burger simple_burger {"Onion Burger", "SIMPLE", ""};
    Burger deluxe_burger {"Cheese Burger", "DELUXE", "Mustard"};

    Drink default_drink;
    Drink choice_drink {"Beer"};
    choice_drink.drink_setter("SMALL");

    Side_Item default_side_item;
    Side_Item choice_side_item {"salad"};

    Meal_Order default_meal_order;
    Meal_Order simple_order {simple_burger, choice_drink, choice_side_item};










    return 0;
}