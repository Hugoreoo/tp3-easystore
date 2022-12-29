//
// Created by hugo on 29/12/2022.
//

#include "Store.h"

Store::Store() = default;

void Store::addProduct(const Product& productToAdd) {
    _products.push_back(new Product(productToAdd));
}

void Store::printMyProducts() {
    for (auto & _product : _products) {
        std::cout << *_product;
    }
}

void Store::printProductByName(const std::string& nameToSearch) {
    bool isFound = false;
    for (auto & _product : _products) {
        if(_product->getTitle() == nameToSearch) {
            std::cout << *_product;
            isFound = true;
        }
    }
    if(!isFound)
        std::cout << "Produit introuvable" << std::endl;
}

void Store::setAmountByName(const std::string &nameToSearch, const int &amountToChange) {
    bool isFound = false;
    for (auto & _product : _products) {
        if(_product->getTitle() == nameToSearch) {
            _product->setAmount(amountToChange);
            isFound = true;
        }
    }
    if(!isFound)
        std::cout << "Produit inexistant" << std::endl;
}

void Store::addClient(const Client &clientToAdd) {
    _clients.push_back(new Client(clientToAdd));
}

void Store::printMyClients() {
    for (auto & client : _clients) {
        std::cout << *client;
    }
}

void Store::printClientById(const std::string &clientIdToPrint) {
    bool isFound = false;
    for (auto & client : _clients) {
        if(client->getId() == clientIdToPrint) {
            std::cout << *client;
            isFound = true;
        }
    }
    if(!isFound)
        std::cout << "Client inexistant" << std::endl;
}

void Store::printOrders() {
    for (auto & order : _orders) {
        std::cout << *order;
    }
}

void Store::printClientOrders(const Client &client) {
    for (auto & order : _orders) {
        if(order->getClient()->getId() == client.getId())
            std::cout << *order;
    }
}

void Store::addProductToClientCart(Client *client, Product *productToAdd) {
    client->addProductToCart(*productToAdd);
}

void Store::delProductToClientCart(Client *client, Product *productToAdd) {
    client->delProductToCart(*productToAdd);
}

void Store::editAmountCart(Client *client, Product *productToAdd, const int amountToChange) {
    client->editAmountCart(*productToAdd, amountToChange);
}

void Store::acceptOrder(Order *order) {
    order->setStatus(true);
}

void Store::orderDelivered(Order *order) {
    order->setDelivered(true);
}

void Store::createOrder(Order *order) {
    _orders.push_back(order);
}

