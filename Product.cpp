//
// Created by hugo on 29/12/2022.
//

#include "Product.h"
#include <assert.h>
#include <utility>

Product::Product(std::string title, std::string desc, int amount, float price) : _title(std::move(title)), _desc(std::move(desc)), _amount(amount), _price(price) {
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

void Product::setAmount(int amount) {
    _amount = amount;
}

std::ostream &operator<<(std::ostream &os, Product &product) {
    os << "| " << product.getTitle() << "\t | Description: " << product.getDesc() << "\t | Price: " << product.getPrice() << "e\t | Amount: " << product.getAmount() << std::endl;
    return os;
}

bool isProduct(std::string title, std::string desc, int amount, float price) {
    if(amount < 1 || price < 0)
        return false;
    return true;
}