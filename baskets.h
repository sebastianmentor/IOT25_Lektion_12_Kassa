#ifndef BASKETS_H
#define BASKETS_H

#include <iostream>
#include <vector>
#include "products.h"


typedef struct 
{
    const int amount;
    const Product &product;
} ItemPurchase;

class Baskets
{
private:
    std::vector <ItemPurchase> items_; 
public:
    Baskets();
    ~Baskets();
    void addItem(ItemPurchase item);
    void printBasket();

};

#endif