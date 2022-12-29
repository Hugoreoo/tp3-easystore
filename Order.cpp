//
// Created by hugo on 29/12/2022.
//

#include "Order.h"
#include <utility>

Order::Order(Client *client, std::vector<Product *> products, bool delivered, bool status) : _client(client), _products(std::move(products)), _delivered(delivered), _status(status), _id(
        randomId(10)) {
    client->clearCart();
}

Client *Order::getClient() const {
    return _client;
}

const std::vector<Product *> &Order::getProducts() const {
    return _products;
}

bool Order::isDelivered() const {
    return _delivered;
}

bool Order::getStatus() const {
    return _status;
}

const std::string &Order::getId() const {
    return _id;
}

std::ostream &operator<<(std::ostream &os, Order &order) {
    os << std::endl << "}=======---------| ORDER - " << order.getId() << " |---------======={" << std::endl;
    if(!order.getStatus())
        os << "Unverified";
    else
        os << "Verified";
    os << *order.getClient();
    os << "--------------------" << std::endl;
    os << "= PRODUCTS ORDERED: " << std::endl;
    os << order.getProducts();
    if(order.isDelivered())
        os << "Delivered" << std::endl;
    else
        os << "Not Delivered Yet" << std::endl;
    return os;
}

void Order::setDelivered(bool delivered) {
    _delivered = delivered;
}

void Order::setStatus(bool status) {
    _status = status;
}

