//
// Created by hugo on 29/12/2022.
//

#ifndef TP3_PRODUCT_H
#define TP3_PRODUCT_H

#include <iostream>

class Product {

public:
    Product(std::string title, std::string desc, int amount, float price);

    [[nodiscard]] const std::string &getTitle() const;
    [[nodiscard]] const std::string &getDesc() const;
    [[nodiscard]] int getAmount() const;
    [[nodiscard]] float getPrice() const;
    [[nodiscard]] const std::string &getId() const;

    void setAmount(int amount);

    friend std::ostream& operator<<(std::ostream &os, Product &product);

private:
    std::string _title;
    std::string _desc;
    int _amount;
    float _price;
    std::string _id;

};

[[maybe_unused]] bool isProduct(const std::string& title, const std::string& desc, int amount, float price);
std::string randomId(const int& len);


#endif //TP3_PRODUCT_H
