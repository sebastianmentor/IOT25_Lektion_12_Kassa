#include "baskets.h"

Baskets::Baskets(/* args */)
{

}

Baskets::~Baskets()
{
    printBasket();
}

void Baskets::addItem(ItemPurchase item)
{
    items_.push_back(item);
};

void Baskets::printBasket()
{   float total_sum = 0;
    for (auto &item: items_){
        float total = item.product.getPrice() * item.amount;
        total_sum += total;

        std::cout 
        << item.product.getName()
        << " "
        << item.amount
        << "*"
        << item.product.getPrice()
        << "="
        << total
        << std::endl;
    }
    std::cout << "Total: " << total_sum << std::endl;
};