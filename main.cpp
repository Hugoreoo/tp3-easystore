#include <iostream>
#include "Store.h"
#include "Product.h"

int main() {
    Store myStore;

    Product product1("PS4", "de sony", 4, 30);
    Product product2("PS5", "de sony", 5, 300);

    myStore.addProduct(product1);
    myStore.addProduct(product2);

    myStore.printMyProducts();

    myStore.setAmountByName("PS4", 10);

    myStore.printProductByName("PS4");

    return 0;
}
