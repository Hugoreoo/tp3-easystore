//
// Created by hugo on 29/12/2022.
//

#include "Store.h"
namespace store {

    Store::Store() = default;

    const std::vector<product::Product *> &Store::getProducts() const {
        return _products;
    }

    const std::vector<client::Client *> &Store::getClients() const {
        return _clients;
    }

    const std::vector<order::Order *> &Store::getOrders() const {
        return _orders;
    }

    void Store::addProduct(product::Product* productToAdd) {
        _products.push_back(productToAdd);
    }

    void Store::addClient(client::Client* clientToAdd) {
        _clients.push_back(clientToAdd);
    }

    void Store::createOrder(order::Order *order) {
        _orders.push_back(order);
    }

    client::Client *Store::getClientById(const std::string& id) {
        for (auto & client : _clients) {
            if(client->getId() == id)
                return client;
        }
        return nullptr;
    }

    product::Product *Store::getProductById(const std::string &id) {
        for (auto & product : _products) {
            if(product->getId() == id)
                return product;
        }
        return nullptr;
    }

    order::Order *Store::getOrderById(const std::string &id) {
        for (auto & order : _orders) {
            if(order->getId() == id)
                return order;
        }
        return nullptr;
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

    void printProductByName(const std::string& nameToSearch, const std::vector<product::Product *> &_products) {
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

    void setAmountByName(const std::string &nameToSearch, const int &amountToChange, const std::vector<product::Product *> &_products) {
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

    void addProductToClientCart(client::Client* client, product::Product *productToAdd) {
        client->addProductToCart(*productToAdd);
    }

    void delProductToClientCart(client::Client *client, product::Product *productToAdd) {
        client->delProductToCart(*productToAdd);
    }

    void editAmountCart(client::Client *client, product::Product *productToAdd, const int amountToChange) {
        client::editAmountCart(*productToAdd, amountToChange, client->getCart());
    }

    void acceptOrder(order::Order *order) {
        order->setStatus(true);
    }

    void orderDelivered(order::Order *order) {
        order->setDelivered(true);
    }

}