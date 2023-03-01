#ifndef BILLSBURGER_SIDE_ITEM_H
#define BILLSBURGER_SIDE_ITEM_H
#include <string>


class Side_Item {

private:
    std::string type;
    double price;

public:
    Side_Item();
    Side_Item(std::string type);

    std::string get_side_type();
    double get_side_price();

    void side_setter(std::string type_val);
};


#endif //BILLSBURGER_SIDE_ITEM_H
