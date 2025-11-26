#include <iostream>
#include <string>
#include "products.h"

Product::Product(int id, float price, std::string name, ProductTypEnum type)
: id_(id), price_(price), name_(name), type_(type){};

int Product::getId(){return id_;};
float Product::getPrice(){return price_;};
std::string Product::getName(){return name_;};
ProductTypEnum Product::getType(){return type_;};