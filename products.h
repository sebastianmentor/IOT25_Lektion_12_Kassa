#include <iostream>
#include <string>

#ifndef PRODUCTS_H
#define PRODUCTS_H

enum ProductTypEnum
{
    PCS,
    KILO
};

class Product
{
    private:
        int id_;
        float price_;
        std::string name_;
        ProductTypEnum type_;

    public:
        Product(int id, float price, std::string name, ProductTypEnum type); 
        int getId() const;
        float getPrice() const;
        std::string getName() const;
        ProductTypEnum getType() const;


};

#endif