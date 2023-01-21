//
// Created by hugo on 29/12/2022.
//

#ifndef TP3_ORDER_H
#define TP3_ORDER_H

#include "Client.h"

namespace order {

    class Order {

    public:
        Order(client::Client *client, std::vector<product::Product *> products, bool delivered = false,
              bool status = false);

        [[nodiscard]] client::Client *getClient() const;

        [[nodiscard]] const std::vector<product::Product *> &getProducts() const;

        [[nodiscard]] bool isDelivered() const;

        [[nodiscard]] bool getStatus() const;

        [[nodiscard]] const std::string &getId() const;

        void setDelivered(bool delivered);

        void setStatus(bool status);

        friend std::ostream &operator<<(std::ostream &os, Order &order);

    private:
        client::Client *_client;
        std::vector<product::Product *> _products;
        bool _delivered;
        bool _status;
        std::string _id;

    };

}
#endif //TP3_ORDER_H
