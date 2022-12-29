//
// Created by hugo on 29/12/2022.
//

#include "Order.h"
#include <utility>

Order::Order(Client *client, std::vector<Product *> products, bool delivered) : _client(client), _products(std::move(products)), _delivered(delivered) {
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

std::ostream &operator<<(std::ostream &os, Order &order) {
    os << std::endl << "}=======---------| ORDER |---------======={" << std::endl;
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
