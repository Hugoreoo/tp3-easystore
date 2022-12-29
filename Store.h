//
// Created by hugo on 29/12/2022.
//

#ifndef TP3_STORE_H
#define TP3_STORE_H

#include <vector>
#include "Product.h"
#include "Client.h"
//#include "Order.h"

class Store {

public:
    Store();

    void addProduct(const Product& productToAdd);
    void printMyProducts();
    void printMyClients();
    void printProductByName(const std::string& nameToSearch);
    void printClientById(const std::string& clientIdToPrint);
    void setAmountByName(const std::string& nameToSearch, const int& amountToChange);

    void addClient(const Client& clientToAdd);
    static void addProductToClientCart(Client *client, Product* productToAdd);
    static void delProductToClientCart(Client *client, Product* productToAdd);
    static void editAmountCart(Client *client, Product *productToAdd, int amountToChange);

private:
    std::vector<Product *> _products;
    std::vector<Client *> _clients;
    //std::vector<Order> _orders;
};


#endif //TP3_STORE_H
