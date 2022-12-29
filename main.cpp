#include <iostream>
#include "Store.h"
#include "Product.h"

int main() {
    Store myStore;
    Product product1("PS4", "de sony", 4, 30);

    std::cout << product1;

    return 0;
}
