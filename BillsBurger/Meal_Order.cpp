#include <iostream>
#include <string>
#include "Meal_Order.h"


using namespace std;

Meal_Order::Meal_Order() {
    burger = Burger();
    drink = Drink();
    sideItem = Side_Item();

}

Meal_Order::Meal_Order(Burger burger_val, Drink drink_val, Side_Item item_val)
    : burger(burger_val), drink(drink_val), sideItem(item_val) {
    cout << "Orders: " << "\n-----------------------------------\n" << "BURGER and it toppings:" << endl;
    cout << burger.get_burger_name() + ":          " << burger.get_burger_price();
    cout << burger.get_burger_toppings();
}