#include <iostream>
#include <string>
#include "Meal_Order.h"


using namespace std;

Meal_Order::Meal_Order() {
    burger = Burger();
    drink = Drink();
    sideItem = Side_Item();

    print_itemize_list();

}

Meal_Order::Meal_Order(Burger burger_val, Drink drink_val, Side_Item item_val)
    : burger(burger_val), drink(drink_val), sideItem(item_val) {

    print_itemize_list();
}

double Meal_Order::total_price() {
    return drink.get_drink_price() + burger.get_burger_price() + sideItem.get_side_price();
}

void Meal_Order::print_itemize_list() {

    cout << "Orders: " << "\n-----------------------------------\n" << "BURGER and it toppings:" << endl;
    cout << burger.get_burger_name() + ", " + burger.get_burger_toppings() + ":       " << burger.get_burger_price() << endl;
    cout << drink.get_drink_type() + " of size : " + drink.get_drink_size() + ":       " << drink.get_drink_price() << endl;
    cout << sideItem.get_side_type() + ":           " << sideItem.get_side_price() << endl;
     cout  << "---------------------------------------\n";
     cout << "Total : " << total_price() << endl;
}