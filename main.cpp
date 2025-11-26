#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "products.h"
#include "baskets.h"

void newCustomer(std::vector<Product> &products){
    Baskets basket;
    std::string userInput;
    std::cout << "Enter PAY to pay\n";
    while (true)
    {
        std::cout << "<product id> <amount>\n";
        std::getline(std::cin, userInput);

        if (userInput == "PAY"){
            break;
        }

        std::stringstream ss(userInput);

        std::string ord;

        std::vector<std::string> resultat;
    
        while (ss >> ord) 
        {   // Splittar på whitespace
            resultat.push_back(ord);
        }
    
        if (resultat.size() != 2)
        {
            std::cout << "Invalid input! Inkorrect amount of arguments!\n";
            continue;
        }

        int product_id = stoi(resultat[0]);

        Product *productToAdd = NULL;

        for (auto &product:products)
        {
            if (product.getId()==product_id)
            {  
                productToAdd = &product;
                break;
            }
        }

        if (!productToAdd==NULL)
        {
            int amount = stoi(resultat[1]);
            ItemPurchase new_item = {amount, *productToAdd};
            basket.addItem(new_item);
            basket.printBasket();
            continue;
        }
        else
        {
            std::cout << "Product not found with product id " << product_id << std::endl;
        }



    }
    
}

void runProgram(std::vector<Product> &products){
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