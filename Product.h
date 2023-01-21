//
// Created by hugo on 29/12/2022.
//

#ifndef TP3_PRODUCT_H
#define TP3_PRODUCT_H

#include <iostream>
#include <vector>

namespace product {

    class Product {

    public:
        Product(std::string  title, std::string  desc, int amount, float price);

        [[nodiscard]] const std::string &getTitle() const;
        [[nodiscard]] const std::string &getDesc() const;
        [[nodiscard]] int getAmount() const;
        [[nodiscard]] float getPrice() const;
        [[nodiscard]] const std::string &getId() const;
        void setAmount(int amount);

        friend std::ostream &operator<<(std::ostream &os, Product &product);
        friend std::ostream &operator<<(std::ostream &os, const std::vector<Product *> &product);

    private:
        std::string _title;
        std::string _desc;
        int _amount;
        float _price;
        const std::string _id;

    };

    bool isProduct(const int& amount, const float& price);
    std::string randomId(const int &len);

}
#endif //TP3_PRODUCT_H
