#include <iostream>
#include "Store.h"
#include "menu_function.h"

int main() {

    store::Store myStore;

    char saisie;

    do {

        printMenu();
        std::cin >> saisie;

        switch (saisie) {
            case '1':
                printMenuStore();
                std::cin >> saisie;

                if(saisie == '1')
                {
                    std::string title, desc; int amount; float price;
                    std::cout << "Titre: ";
                    std::cin >> title;
                    std::cout << "Description: ";
                    std::cin >> desc;
                    std::cout << "Quantite: ";
                    std::cin >> amount;
                    std::cout << "Prix: ";
                    std::cin >> price;

                    myStore.addProduct(new product::Product(title, desc, amount, price));

                    std::cout << std::endl << "--[ PRODUIT CREE ]--" << std::endl;
                }

                if(saisie == '2')
                {
                    store::printMyClients(myStore.getClients());
                }
                else if (saisie == '3')
                {
                    store::printMyProducts(myStore.getProducts());
                }
                else if (saisie == '4')
                {
                    std::string productName;
                    std::cout << "Nom: ";
                    std::cin >> productName;

                    store::printProductByName(productName, myStore.getProducts());
                }
                else if (saisie == '5')
                {
                    store::printOrders(myStore.getOrders());
                }
                else if (saisie == '6')
                {
                    std::string productName; int amount;
                    std::cout << "Nom: ";
                    std::cin >> productName;
                    std::cout << "Nouvelle Quantite du Produit: ";
                    std::cin >> amount;

                    store::setAmountByName(productName, amount, myStore.getProducts());
                }

                break;
            case '2':
                printMenuUser();
                std::cin >> saisie;

                if(saisie == '1')
                {
                    std::string name, firstname;
                    std::cout << "Nom: ";
                    std::cin >> name;
                    std::cout << "Prenom: ";
                    std::cin >> firstname;

                    myStore.addClient(new client::Client(name, firstname));

                    std::cout << std::endl << "--[ CLIENT AJOUTEE ]--" << std::endl;
                }
                else if(saisie == '2')
                {
                    std::string clientId, productId;
                    std::cout << "ID du Client: ";
                    std::cin >> clientId;
                    std::cout << "ID du Produit: ";
                    std::cin >> productId;

                    store::addProductToClientCart(myStore.getClientById(clientId), myStore.getProductById(productId));

                    std::cout << std::endl << "--[ PRODUIT AJOUTEE ]--" << std::endl;
                }
                else if(saisie == '3')
                {
                    std::string clientId, productId;
                    std::cout << "ID du Client: ";
                    std::cin >> clientId;
                    std::cout << "ID du Produit: ";
                    std::cin >> productId;

                    store::delProductToClientCart(myStore.getClientById(clientId), myStore.getProductById(productId));

                    std::cout << std::endl << "--[ PRODUIT SUPPRIME ]--" << std::endl;
                }
                else if (saisie == '4')
                {
                    std::string clientId, productId; int amount;
                    std::cout << "ID du Client: ";
                    std::cin >> clientId;
                    std::cout << "ID du Produit: ";
                    std::cin >> productId;
                    std::cout << "Nouvelle Quantite du Produit: ";
                    std::cin >> amount;

                    store::editAmountCart(myStore.getClientById(clientId), myStore.getProductById(productId), amount);
                }
                else if (saisie == '5')
                {
                    store::printMyClients(myStore.getClients());
                }
                else if ((saisie == '6') || (saisie == '7'))
                {
                    std::string id;
                    std::cout << "ID du Client: ";
                    std::cin >> id;

                    if (saisie == '3') store::printClientById(id, myStore.getClients());
                    if (saisie == '4') store::printClientOrders(*myStore.getClientById(id), myStore.getOrders());
                }

                break;
            case '3':
                printMenuOrder();
                std::cin >> saisie;

                if(saisie == '1')
                {
                    std::string id;
                    std::cout << "ID du Client: ";
                    std::cin >> id;
                    myStore.createOrder(new order::Order(myStore.getClientById(id), myStore.getClientById(id)->getCart()));

                    std::cout << std::endl << "--[ COMMANDE CREE ]--" << std::endl;
                }

                if(saisie == '2')
                {
                    std::string id;
                    std::cout << "ID de la Commande: ";
                    std::cin >> id;
                    store::acceptOrder(myStore.getOrderById(id));

                    std::cout << std::endl << "--[ COMMANDE ACCEPTEE ]--" << std::endl;
                }
                else if (saisie == '3')
                {
                    std::string id;
                    std::cout << "ID de la Commande: ";
                    std::cin >> id;
                    store::orderDelivered(myStore.getOrderById(id));

                    std::cout << std::endl << "--[ COMMANDE LIVREE ]--" << std::endl;
                }
                else if (saisie == '4')
                {
                    std::string clientId, orderId;
                    std::cout << "ID du Client: ";
                    std::cin >> clientId;
                    std::cout << "ID de la Commande: ";
                    std::cin >> orderId;

                    store::printClientOrders(*myStore.getClientById(clientId), myStore.getOrders());
                }
                else if (saisie == '5')
                {
                    store::printOrders(myStore.getOrders());
                }

                break;
            default:
                break;
        }

    } while ((saisie != 'q') && (saisie != 'Q'));

    return 0;
}
