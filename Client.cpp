//
// Created by hugo on 29/12/2022.
//

#include "Client.h"
#include <utility>
#include <cassert>

Client::Client(std::string name, std::string firstname) : _id(randomId(8)), _name(std::move(name)), _firstname(std::move(firstname)) {
    bool statut = isClient(name, firstname);
    assert(statut && "Product is not valid");
}

const std::string &Client::getId() const {
    return _id;
}

const std::string &Client::getName() const {
    return _name;
}

const std::string &Client::getFirstname() const {
    return _firstname;
}

void Client::addProductToCart(const Product& product) {
    _cart.push_back(new Product(product));
}

void Client::clearCart() {
    _cart.clear();
}

void Client::editAmountCart(const Product& product, int newAmount) {
    for (auto & i : _cart) {
        if(product.getId() == i->getId())
            i->setAmount(newAmount);
    }
}

void Client::delProductToCart(const Product& product) {
    for (int i = 0 ; i < _cart.size() ; i++) {
        if(product.getId() == _cart.at(i)->getId()) {
            _cart.erase(_cart.begin()+i);
        }
    }
}

std::ostream &operator<<(std::ostream &os, Client &client) {
    os << std::endl << "============|| CLIENT ||============" << std::endl;
    os << "| " << client.getName() << " |\t | " << client.getFirstname() << " | (" << client.getId() << ")"<< std::endl;
    os << "------------| CART |------------" << std::endl;
    auto clientCart = client.getCart();
    for (auto & i : clientCart) {
        os << *i;
    }
    if(clientCart.empty())
        os << "| Cart is empty |" << std::endl;

    return os;
}

const std::vector<Product *> &Client::getCart() const {
    return _cart;
}

bool isClient(const std::string& name, const std::string& firstname) {
    return true;
}
