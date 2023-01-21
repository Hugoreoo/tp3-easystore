#include <iostream>
#include "Store.h"
#include "Product.h"
#include "Client.h"
#include "Order.h"

int main() {
    store::Store myStore;

    /*std::string saisie;

    do {

        std::cout << "}-------======( BIENVENUE SUR EASYSTORE )======-------{";
        std::cin >> saisie;

    } while ((saisie != "q") && (saisie != "Q"));*/


    client::Client moi("Goncalves", "Hugo");

    product::Product product1("PS4", "de sony", 4, 30);
    product::Product product2("PS5", "de sony", 5, 300);
    product::Product product3("Iphone", "de APPLE", 50, 1300);
    product::Product product4("Ipad", "de APPLE", 23, 100);
    product::Product product5("Macbook", "de APPLE", 15, 3000);

    myStore.addProduct(product1);
    myStore.addProduct(product2);
    myStore.addProduct(product3);
    myStore.addProduct(product4);
    myStore.addProduct(product5);

    store::printMyProducts(myStore.getProducts());

    moi.addProductToCart(product2);
    moi.addProductToCart(product4);

    myStore.addClient(&moi);

    store::Store::addProductToClientCart(&moi, &product1);
    store::printClientById("5ZY4HSUI", myStore.getClients());

    store::printMyClients(myStore.getClients());

    order::Order order1(&moi, moi.getCart());
    myStore.createOrder(&order1);

    store::Store::acceptOrder(&order1);
    store::Store::orderDelivered(&order1);

    store::printOrders(myStore.getOrders());

    store::printClientOrders(moi, myStore.getOrders());

    return 0;
}
