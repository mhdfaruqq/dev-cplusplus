#include <iostream>
#include "Meal_Order.h"


int main() {

    Burger default_burger {};
    Burger simple_burger {"Onion Burger", "SIMPLE", ""};
    Burger deluxe_burger {"Cheese Burger", "DELUXE", "Mustard"};

    Drink default_drink {};
    Drink choice_drink {"Beer"};
    choice_drink.drink_setter("SMALL");










    return 0;
}