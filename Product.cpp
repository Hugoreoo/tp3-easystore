//
// Created by hugo on 29/12/2022.
//

#include "Product.h"
#include <cassert>
#include <utility>

Product::Product(std::string title, std::string desc, int amount, float price) : _title(std::move(title)), _desc(std::move(desc)), _amount(amount), _price(price), _id(
        randomId(5)) {
    bool statut = isProduct(title, desc, amount, price);
    assert(statut && "Product is not valid");
}

const std::string &Product::getTitle() const {
    return _title;
}

const std::string &Product::getDesc() const {
    return _desc;
}

int Product::getAmount() const {
    return _amount;
}

float Product::getPrice() const {
    return _price;
}

const std::string &Product::getId() const {
    return _id;
}

void Product::setAmount(int amount) {
    _amount = amount;
}

std::ostream &operator<<(std::ostream &os, Product &product) {
    os << "| " << product.getTitle() << "\t\t| Description: " << product.getDesc() << "\t| Price: " << product.getPrice() << "e\t| Amount: " << product.getAmount() << std::endl;
    return os;
}

bool isProduct(const std::string& title, const std::string& desc, int amount, float price) {
    if(amount < 1 || price < 0)
        return false;
    return true;
}

std::string randomId(const int& len) {
    static const char alphanum[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return tmp_s;
}