#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
    Item(std::string, unsigned long);

    unsigned long getItemPrice();
    void setItemPrice(unsigned long newPrice);
    std::string getItemName();
    std::string getItemNameInfo();
    std::string getItemPriceInfo();

private:
    std::string name;
    unsigned long price;
};

#endif