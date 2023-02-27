#ifndef BILLSBURGER_MEAL_ORDER_H
#define BILLSBURGER_MEAL_ORDER_H

#include "Drink.h"
#include "Side_Item.h"
#include "Burger.h"

class Meal_Order {

private:
    Burger burger;
    Drink drink;
    Side_Item sideItem;

public:
    Meal_Order();
    Meal_Order(Burger burger_val, Drink drink_val, Side_Item item_val);

    double total_price();
    void print_itemize_list();


};


#endif //BILLSBURGER_MEAL_ORDER_H
