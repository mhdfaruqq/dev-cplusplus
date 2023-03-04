#ifndef BILLSBURGER_DRINK_H
#define BILLSBURGER_DRINK_H
#include <string>

class Drink {

private:
    std::string type;
    std::string size;
    double price{};

public:
//    Drink(std::string type_val, std::string size_val, double price_val);

    Drink();
    Drink(std::string type);

    void drink_setter(std::string type_val);
    std::string get_drink_type();
    std::string get_drink_size();
    double get_drink_price();


};


#endif //BILLSBURGER_DRINK_H
