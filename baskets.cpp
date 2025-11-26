#include "baskets.h"

Baskets::Baskets(/* args */)
{

}

Baskets::~Baskets()
{

}

void Baskets::addItem(ItemPurchase item)
{
    items_.push_back(item);
};

void Baskets::printBasket()
{   
    for (auto &item: items_){
        std::cout << item.product.getName();
    }
};