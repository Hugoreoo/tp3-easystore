//
// Created by hugo on 29/12/2022.
//

#include "Store.h"

Store::Store() = default;

void Store::addProduct(const Product& productToAdd) {
    _products.push_back(productToAdd);
}

void Store::printMyProducts() {
    for (auto & _product : _products) {
        std::cout << _product;
    }
}

void Store::printProductByName(const std::string& nameToSearch) {
    bool isFound = false;
    for (auto & _product : _products) {
        if(_product.getTitle() == nameToSearch) {
            std::cout << _product;
            isFound = true;
        }
    }
    if(!isFound)
        std::cout << "Produit introuvable" << std::endl;
}

void Store::setAmountByName(const std::string &nameToSearch, const int &amountToChange) {
    bool isFound = false;
    for (auto & _product : _products) {
        if(_product.getTitle() == nameToSearch) {
            _product.setAmount(amountToChange);
            isFound = true;
        }
    }
    if(!isFound)
        std::cout << "Produit inexistant" << std::endl;
}
