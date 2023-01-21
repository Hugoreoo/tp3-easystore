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

        void addProduct(product::Product *productToAdd);
        void addClient(client::Client* clientToAdd);
        void createOrder(order::Order *order);

        client::Client* getClientById(const std::string& id);
        product::Product* getProductById(const std::string& id);
        order::Order* getOrderById(const std::string& id);

    private:
        std::vector<product::Product *> _products;
        std::vector<client::Client *> _clients;
        std::vector<order::Order *> _orders;
    };

    //HELPERS PRINT
    [[maybe_unused]] void printMyProducts(const std::vector<product::Product *> &_products)  ;
    [[maybe_unused]] void printMyClients(const std::vector<client::Client *> &_clients);
    [[maybe_unused]] void printOrders(const std::vector<order::Order *> &_orders);
    [[maybe_unused]] void printProductByName(const std::string &nameToSearch, const std::vector<product::Product *> &_products);
    [[maybe_unused]] void printClientById(const std::string &clientIdToPrint, const std::vector<client::Client *>& _clients);
    [[maybe_unused]] void printClientOrders(const client::Client &client, const std::vector<order::Order *> &_orders);

    //HELPERS
    [[maybe_unused]] void setAmountByName(const std::string &nameToSearch, const int &amountToChange, const std::vector<product::Product *> &_products);
    [[maybe_unused]] void addProductToClientCart(client::Client *client, product::Product *productToAdd);
    [[maybe_unused]] void delProductToClientCart(client::Client *client, product::Product *productToAdd);
    [[maybe_unused]] void editAmountCart(client::Client *client, product::Product *productToAdd, int amountToChange);
    [[maybe_unused]] void acceptOrder(order::Order *order);
    [[maybe_unused]] void orderDelivered(order::Order *order);

}
#endif //TP3_STORE_H
