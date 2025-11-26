#include <iostream>
#include <string>
#include "products.h"

Product::Product(int id, float price, std::string name, ProductTypEnum type)
: id_(id), price_(price), name_(name), type_(type){};

int Product::getId() const{return id_;};
float Product::getPrice() const{return price_;};
std::string Product::getName() const{return name_;};
ProductTypEnum Product::getType() const{return type_;};