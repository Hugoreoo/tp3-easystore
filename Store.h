//
// Created by hugo on 29/12/2022.
//

#ifndef TP3_STORE_H
#define TP3_STORE_H

#include <vector>
#include "Product.h"
#include "Client.h"
#include "Order.h"

namespace store {

    class Store {

    public:
        Store();

        [[nodiscard]] const std::vector<product::Product *> &getProducts() const;
        [[nodiscard]] const std::vector<client::Client *> &getClients() const;
        [[nodiscard]] const std::vector<order::Order *> &getOrders() const;

        void addProduct(const product::Product &productToAdd);

        void setAmountByName(const std::string &nameToSearch, const int &amountToChange);
        void addClient(client::Client *clientToAdd);
        static void addProductToClientCart(client::Client *client, product::Product *productToAdd);
        static void delProductToClientCart(client::Client *client, product::Product *productToAdd);
        static void editAmountCart(client::Client *client, product::Product *productToAdd, int amountToChange);
        static void acceptOrder(order::Order *order);
        static void orderDelivered(order::Order *order);
        void createOrder(order::Order *order);

    private:
        std::vector<product::Product *> _products;
        std::vector<client::Client *> _clients;
        std::vector<order::Order *> _orders;
    };

    //HELPER PRINT
    [[maybe_unused]] void printMyProducts(const std::vector<product::Product *> &_products);
    [[maybe_unused]] void printMyClients(const std::vector<client::Client *> &_clients);
    [[maybe_unused]] void printOrders(const std::vector<order::Order *> &_orders);
    [[maybe_unused]] void printProductByName(const std::string &nameToSearch, const std::vector<product::Product *> &_products);
    [[maybe_unused]] void printClientById(const std::string &clientIdToPrint, const std::vector<client::Client *>& _clients);
    [[maybe_unused]] void printClientOrders(const client::Client &client, const std::vector<order::Order *> &_orders);

    //HELPER


}
#endif //TP3_STORE_H
