//
// Created by hugo on 29/12/2022.
//

#include "Store.h"
namespace store {

    Store::Store() = default;

    void Store::addProduct(const product::Product& productToAdd) {
        _products.push_back(new product::Product(productToAdd));
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

    void Store::addClient(client::Client* clientToAdd) {
        _clients.push_back(clientToAdd);
    }

    void Store::addProductToClientCart(client::Client* client, product::Product *productToAdd) {
        client->addProductToCart(*productToAdd);
    }

    void Store::delProductToClientCart(client::Client *client, product::Product *productToAdd) {
        client->delProductToCart(*productToAdd);
    }

    void Store::editAmountCart(client::Client *client, product::Product *productToAdd, const int amountToChange) {
        client->editAmountCart(*productToAdd, amountToChange);
    }

    void Store::acceptOrder(order::Order *order) {
        order->setStatus(true);
    }

    void Store::orderDelivered(order::Order *order) {
        order->setDelivered(true);
    }

    void Store::createOrder(order::Order *order) {
        _orders.push_back(order);
    }

    const std::vector<product::Product *> &Store::getProducts() const {
        return _products;
    }

    const std::vector<client::Client *> &Store::getClients() const {
        return _clients;
    }

    const std::vector<order::Order *> &Store::getOrders() const {
        return _orders;
    }

    void printMyProducts(const std::vector<product::Product *>& _products) {
        for (auto & product : _products)
            std::cout << *product;
    }

    void printMyClients(const std::vector<client::Client *>& _clients) {
        for (auto & client : _clients)
            std::cout << *client;
    }

    void printOrders(const std::vector<order::Order *> &_orders) {
        for (auto & order : _orders)
            std::cout << *order;
    }

    [[maybe_unused]] void printProductByName(const std::string& nameToSearch, const std::vector<product::Product *> &_products) {
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

    void printClientById(const std::string &clientIdToPrint, const std::vector<client::Client *>& _clients) {
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

    void printClientOrders(const client::Client &client, const std::vector<order::Order *> &_orders) {
        for (auto & order : _orders) {
            if(order->getClient()->getId() == client.getId())
                std::cout << *order;
        }
    }

}