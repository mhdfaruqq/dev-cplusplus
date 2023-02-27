#ifndef BILLSBURGER_BURGER_H
#define BILLSBURGER_BURGER_H
#include <string>


class Burger {

private:
    std::string name;
    std::string type;
    std::string toppings;
    double price;

public:
    Burger();
    Burger(std::string name, std::string type);

    double get_burger_price();
    std::string get_burger_name();
    std::string get_burger_toppings();

    void burger_setter(std::string name_val, std::string toppings_val);

private:
    void toppings_by_type(std::string toppings_val);
    void set_toppings(std::string toppings);


};


#endif //BILLSBURGER_BURGER_H
