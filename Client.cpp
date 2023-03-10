//
// Created by hugo on 29/12/2022.
//

#include "Client.h"
#include <cassert>

namespace client {

    Client::Client(const std::string& name, const std::string& firstname) : _id(product::randomId(8)), _name(name),
                                                              _firstname(firstname) {
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

    const std::vector<product::Product *> &Client::getCart() const {
        return _cart;
    }

    void Client::addProductToCart(const product::Product &product) {
        _cart.push_back(new product::Product(product));
    }

    void Client::clearCart() {
        _cart.clear();
    }

    void Client::delProductToCart(const product::Product &product) {
        for (int i = 0; i < _cart.size(); i++) {
            if (product.getId() == _cart.at(i)->getId()) {
                _cart.erase(_cart.begin() + i);
            }
        }
    }

    std::ostream &operator<<(std::ostream &os, Client &client) {
        os << std::endl << "============|| CLIENT ||============" << std::endl;
        os << "| " << client.getName() << " |\t | " << client.getFirstname() << " | (" << client.getId() << ")"
           << std::endl;
        os << "------------| CART |------------" << std::endl;
        auto clientCart = client.getCart();
        for (auto &i: clientCart) {
            os << *i;
        }
        if (clientCart.empty())
            os << "| Cart is empty |" << std::endl;

        return os;
    }

    bool isClient(const std::string &name, const std::string &firstname) {
        return true;
    }

    void editAmountCart(const product::Product &product, int newAmount, const std::vector<product::Product *> &_cart) {
        for (auto &i: _cart) {
            if (product.getId() == i->getId())
                i->setAmount(newAmount);
        }
    }

}