#include <iostream>
#include "Store.h"
#include "Product.h"
#include "Client.h"
#include "Order.h"

int main() {
    Store myStore;
    Client moi("Goncalves", "Hugo");

    Product product1("PS4", "de sony", 4, 30);
    Product product2("PS5", "de sony", 5, 300);
    Product product3("Iphone", "de APPLE", 50, 1300);
    Product product4("Ipad", "de APPLE", 23, 100);
    Product product5("Macbook", "de APPLE", 15, 3000);

    myStore.addProduct(product1);
    myStore.addProduct(product2);
    myStore.addProduct(product3);
    myStore.addProduct(product4);
    myStore.addProduct(product5);

    //myStore.printMyProducts();

    moi.addProductToCart(product2);
    moi.addProductToCart(product4);

    myStore.addClient(moi);

    myStore.printMyClients();

    //Store::addProductToClientCart(&moi, &product1);
    //myStore.printClientById("5ZY4HSUI");

    Order order1(&moi, moi.getCart());

    std::cout << order1;

    return 0;
}
