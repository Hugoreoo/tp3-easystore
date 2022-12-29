//
// Created by hugo on 29/12/2022.
//

#ifndef TP3_STORE_H
#define TP3_STORE_H

#include <vector>
#include "Product.h"
//#include "Client.h"
//#include "Order.h"

class Store {

public:
    Store();

    void addProduct(const Product& productToAdd);
    void printMyProducts();
    void printProductByName(const std::string& nameToSearch);

    void setAmountByName(const std::string& nameToSearch, const int& amountToChange);

private:
    std::vector<Product> _products;
    //std::vector<Client> _clients;
    //std::vector<Order> _orders;
};


#endif //TP3_STORE_H
