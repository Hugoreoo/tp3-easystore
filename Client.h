//
// Created by hugo on 29/12/2022.
//

#ifndef TP3_CLIENT_H
#define TP3_CLIENT_H

#include "Product.h"
#include <vector>

class Client {

public:
    Client(std::string name, std::string firstname);

    [[nodiscard]] const std::string &getId() const;
    [[nodiscard]] const std::string &getName() const;
    [[nodiscard]] const std::string &getFirstname() const;
    [[nodiscard]] const std::vector<Product *> &getCart() const;

    void addProductToCart(const Product& product);
    void clearCart();

    void editAmountCart(const Product& product, int newAmount);
    void delProductToCart(const Product& product);

    friend std::ostream& operator<<(std::ostream &os, Client &client);

private:
    std::string _id;
    std::string _name;
    std::string _firstname;
    std::vector<Product *> _cart;

};

[[maybe_unused]] bool isClient(const std::string& name, const std::string& firstname);

#endif //TP3_CLIENT_H
