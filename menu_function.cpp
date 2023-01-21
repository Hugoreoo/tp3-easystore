//
// Created by hugo on 21/01/2023.
//

#include <iostream>

void printMenu() {
    std::cout << std::endl << "}-------======( BIENVENUE SUR EASYSTORE )======-------{" << std::endl << std::endl;
    std::cout << "(------ MENU ------)" << std::endl;
    std::cout << "1) Gestion du Magasin." << std::endl;
    std::cout << "2) Gestion des Utilisateurs." << std::endl;
    std::cout << "3) Gestion des Commandes." << std::endl;
    std::cout << "q) Pour Quitter." << std::endl;
    std::cout << "(------------------)" << std::endl << std::endl;

    std::cout << "Votre choix: ";
}

void printMenuStore() {
    std::cout << std::endl << "(------ MENU ------)" << std::endl;
    std::cout << "1) Ajouter un Produit." << std::endl;
    std::cout << "2) Afficher mes Clients." << std::endl;
    std::cout << "3) Afficher mes Produits." << std::endl;
    std::cout << "4) Afficher Produit par Nom." << std::endl;
    std::cout << "5) Afficher mes Commandes." << std::endl;
    std::cout << "6) Modifier Quantite d'un Produit." << std::endl;
    std::cout << "r) Pour Retour." << std::endl;
    std::cout << "q) Pour Quitter." << std::endl;
    std::cout << "(------------------)" << std::endl << std::endl;

    std::cout << "Votre choix: ";
}

void printMenuUser() {
    std::cout << std::endl << "(------ MENU ------)" << std::endl;
    std::cout << "1) Creer un Client." << std::endl;
    std::cout << "2) Ajouter Produit a un Panier Client." << std::endl;
    std::cout << "3) Supprimer Produit d'un Panier Client." << std::endl;
    std::cout << "4) Modifier quantite Produit d'un Panier Client." << std::endl;
    std::cout << "5) Afficher mes Clients." << std::endl;
    std::cout << "6) Afficher un Client par ID." << std::endl;
    std::cout << "7) Afficher commande d'un Client." << std::endl;
    std::cout << "r) Pour Retour." << std::endl;
    std::cout << "q) Pour Quitter." << std::endl;
    std::cout << "(------------------)" << std::endl << std::endl;

    std::cout << "Votre choix: ";
}

void printMenuOrder() {
    std::cout << std::endl << "(------ MENU ------)" << std::endl;
    std::cout << "1) Creer une Commande." << std::endl;
    std::cout << "2) Accepter une Commande." << std::endl;
    std::cout << "3) Valider une Livraison." << std::endl;
    std::cout << "4) Afficher Commande(s) d'un Client." << std::endl;
    std::cout << "5) Afficher mes Commandes." << std::endl;
    std::cout << "r) Pour Retour." << std::endl;
    std::cout << "q) Pour Quitter." << std::endl;
    std::cout << "(------------------)" << std::endl << std::endl;

    std::cout << "Votre choix: ";
}