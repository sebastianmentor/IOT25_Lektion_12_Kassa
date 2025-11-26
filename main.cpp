#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "products.h"

void newCustomer(const std::vector<Product> &products){
    while (true)
    {
        /* code */
    }
    
}

void runProgram(const std::vector<Product> &products){
    std::string choice;
    while (true)
    {
        std::cout << "1. New customer\n2. Quit\n";
        std::getline(std::cin, choice);

        if (choice == "1")
        {
            newCustomer(products);
        }
        else if (choice == "2")
        {
            break;
        }
        else
        {
            std::cout << "Invalid input!\n";
        }
    }
}


int main(void){

    std::vector <Product> products;
    Product p1(100, 19.9, "Risifrutti", PCS);
    Product p2(200, 89.9, "Kaffe", PCS);
    Product p3(300, 32.5, "Marabou", PCS);
    Product p4(400, 12.9, "Potatis", KILO);
    Product p5(500, 8.0, "Kivi", PCS);
    Product p6(600, 52.5, "Ketchup", PCS);
    Product p7(700, 129.9, "Biff", KILO);
    Product p8(800, 18.0, "Bananer", KILO);
    Product p9(900, 35.2, "Chips", PCS);
    products.push_back(p1);
    products.push_back(p2);
    products.push_back(p3);
    products.push_back(p4);
    products.push_back(p5);
    products.push_back(p6);
    products.push_back(p7);
    products.push_back(p8);
    products.push_back(p9);

    runProgram(products);

}   