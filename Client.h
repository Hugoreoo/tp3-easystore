//
// Created by hugo on 29/12/2022.
//

#ifndef TP3_CLIENT_H
#define TP3_CLIENT_H

#include "Product.h"
#include <vector>

namespace client {

    class Client {

    public:
        Client(const std::string& name, const std::string& firstname);

        [[nodiscard]] const std::string &getId() const;
        [[nodiscard]] const std::string &getName() const;
        [[nodiscard]] const std::string &getFirstname() const;
        [[nodiscard]] const std::vector<product::Product *> &getCart() const;

        void addProductToCart(const product::Product& product);
        void clearCart();
        void delProductToCart(const product::Product& product);

        //FRIEND
        friend std::ostream& operator<<(std::ostream &os, Client &client);

    private:
        const std::string _id;
        std::string _name;
        std::string _firstname;
        std::vector<product::Product *> _cart;

    };

    [[maybe_unused]] bool isClient(const std::string& name, const std::string& firstname);
    [[maybe_unused]] void editAmountCart(const product::Product& product, int newAmount, const std::vector<product::Product *> &_cart);

}
#endif //TP3_CLIENT_H
