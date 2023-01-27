# TP3 C++ : EasyStore

Notre TP a pour but de développer une application de commerce virtuel appelée EasyStore.

## Pourquoi avoir choisi ce TP

Nous avons choisi ce TP car il nous semblait être un bon moyen de progresser dans notre apprentissage de la programmation orientée objet. Celui-ci exigeait de développer un petit nombre de classes mais proposait de mettre en pratique des méthodes et des fonctions plus complexes. Il nous semblait donc plus intéressant que le second TP proposé, qui mettait davantage l'accent sur la création de nombreuses classes. De plus, la création d’un magasin virtuel nous semblait intéressant e semblait être un petit projet concret comme première expérience.

## Quelles sont nos méthodologies utilisées ?

Pour la réalisation de ce TP, nous avons utilisé une méthodologie de travail en équipe basée sur la répartition des tâches par question. Chacun de nous a été assigné à une question spécifique et nous avons travaillé sur cette question individuellement en utilisant nos branches respectives sur notre GitHub. Une fois que chacun avait terminé sa question, nous fusionnions, avec le merge, nos travaux sur la branche principale de notre répertoire, ce qui nous a permis de continuer à avancer ensemble sur le projet. Cette méthode nous a permis de diviser le travail en petites tâches gérables et de travailler de manière efficace en équipe.

## Qu'est ce qui nous différencie ?

La manière dont nous avons implémenté les classes Client, Product, Store et Order montre une bonne compréhension de la programmation orientée objet et une utilisation efficace des différents concepts tels que les constructeurs, les méthodes d'accès (getters), les opérateurs de surcharge, etc. Nous avons utilisé également des concepts comme les pointeurs et les références pour gérer les relations entre les objets de différentes classes.  
De plus, nous avons développé un système d'affichage puissant qui permet aux administrateurs de la boutique de gérer ses clients, gérer les commandes ainsi que gérer sa boutique, tout cela dans le main à l'aide de différentes fonctions accessible dans un fichier dédier: __menu_function.cpp__.

## Quels outils avons nous utilisés ?

Pour réaliser notre projet à plusieurs, nous avons choisi d'utiliser l'outil Git et son site GitHub. Nous avons pu bénéficier de plusieurs avantages. Tout d'abord, cet outil nous a permis de travailler efficacement à plusieurs en nous permettant de nous répartir le travail à l'aide des branches comme cité précédemment. Chacun de nous a pu travailler sur une question spécifique dans sa propre branche et ensuite fusionner son travail avec la branche principale. Cela nous a permis de mieux organiser notre travail et de limiter les conflits de code.  
De plus, Git nous a également permis de gérer efficacement le « versionning » de notre projet. Il a enregistré toutes les modifications apportées au code au fil du temps, ce qui nous a permis de revenir facilement à des versions précédentes de notre programme si nécessaire. Cela nous a également permis de conserver une sauvegarde générale de notre programme à tout moment.  
Enfin, l'utilisation de Git nous a également offert la possibilité de travailler à distance, en équipe, sans devoir nous synchroniser physiquement.  
Concernant les outils tels que les IDE, nous avons eu la possibilité d’utiliser CLion ainsi que VisualStudioCode qui sont deux IDE très puissants nous fournissant une grande aide pour la réalisation de ce TP.

## Déscription de notre programme

### Classe Client:

Nous avons créé la classe Client pour que le système de gestion de magasin soit. Cette classe Client contient des informations sur nos clients, telles que son nom, son prénom et un identifiant unique généré automatiquement. Elle contient également un panier d'achat qui est un tableau de pointeurs vers des objets de la classe Produit.  
La classe Client possède plusieurs méthodes publiques qui permettent de gérer le panier d'achat du client. La méthode __addProductToCart__ permet d'ajouter un produit au panier, tandis que la méthode __clearCart__ permet de vider le panier. La méthode delProductToCart permet de supprimer un produit du panier d'achat.  
Nous avons également surchargé l'opérateur « __<<__ » pour pouvoir afficher les informations du client dans un flux de sortie (un terminal). Cela permet d'afficher facilement les informations du client en utilisant un simple appel de la méthode « __std::cout__ ».  
Enfin, nous avons écrit une fonction helper __isClient__ qui prend en entrée le nom et le prénom d’un client et qui retourne vrai si les informations du client son correcte avec nos attributs, et faux sinon. Nous avons également écrit une fonction helper __editAmountCart__ pour pouvoir changer la quantité d'un produit dans le panier d'achat.

### Classe Product:

La classe Product représente un produit dans une boutique en ligne. Elle contient des informations telles que le titre, la description, la quantité disponible, le prix et un identifiant unique généré aléatoirement. Les attributs sont stockés en tant que membres privés de la classe et sont accessibles via des fonctions d'accès public comme des getters.  
La classe contient également deux surcharges d’opérateur pour faciliter l'affichage des informations d'un produit. Il y a également une fonction pour valider si un produit est valide en fonction de son prix et de sa quantité, et une fonction pour générer un identifiant unique aléatoire pour chaque produit, comme pour les objets Client.  
En travaillant sur cette classe, nous avons utilisé les concepts de programmation C++ tels que les __namespaces__ pour organiser le code et les fonctions amies pour permettre à des fonctions externes d'accéder aux membres privés d'une classe, ici, pour une surcharge d’opérateur. Nous avons testé la classe en utilisant des instances de produits avec différentes valeurs pour les informations et en utilisant les fonctions d'accès pour vérifier que les valeurs étaient correctes.


### Classe Store:

La classe Store est utilisée pour gérer les différents produits, clients et commandes d'une entreprise. Elle contient des vecteurs pour stocker les produits, les clients et les commandes, ainsi que des fonctions pour ajouter et récupérer ces éléments. Elle contient également des fonctions helpers pour afficher les différentes informations, telles que les produits, les clients et les commandes, ainsi que des fonctions pour gérer les paniers de clients et les commandes.  
Les fonctions de cette classe permettent de gérer les différentes parties de l'entreprise. Les fonctions d'ajout permettent d'ajouter des produits, des clients et des commandes au magasin. Il existe également des fonctions d’accès à nos attributs telles que des getters pour récupérer nos clients, nos produits et des commandes en fonction de leur identifiant, par exemple.  
Nous avons créé des fonctions helpers permettant de gérer les paniers de clients, telles que l'ajout, la suppression et la modification de la quantité d'un produit dans le panier d'un client. Nous avons créé des fonctions helpers pour accepter et marquer les commandes comme livrées lorsque le client a passé une commande dans notre boutique.  
En résumé, la classe Store est utilisée pour gérer les différents aspects de l'entreprise, tels que les produits, les clients et les commandes. Elle contient des fonctions pour ajouter et récupérer ces éléments, et des fonctions pour gérer les paniers de clients et les commandes.

### Classe Order:

La classe Order est utilisée pour gérer les commandes effectuées par les clients dans notre système de boutique. Elle contient des informations sur le client qui a effectué la commande, les produits inclus dans la commande, l'état de la commande (livrée ou non) et son statut (acceptée ou non).  
La classe contient des méthodes pour obtenir ces informations, ainsi que des méthodes pour mettre à jour l'état de livraison et le statut de la commande. Nous avons également implémenté une surcharge d'opérateur pour faciliter l'affichage des informations de la commande.  
En résumé, la classe Order est un outil clé pour gérer les commandes et les informations associées dans le système de la boutique, en permettant aux administrateurs de notre programme de voir les détails de chaque commande et de mettre à jour leur statut en temps réel.

## Conclusion

Ce TP nous a permis de mettre en pratique les connaissances acquises en programmation orientée objet. Il nous a permis de développer nos compétences en utilisant des concepts tels que l'encapsulation, l'héritage et le polymorphisme. De plus, ce TP nous a donné l'occasion de travailler avec des structures de données telles que des vecteurs et des classes qui nous permettaient de gérer des produits, des clients et des commandes d'un magasin virtuel. Cela nous a permis de comprendre comment ces concepts peuvent être utilisés dans un projet réel et de les intégrer dans notre propre logique de programmation.  
Nous avons pu utiliser et comprendre des outils tels que Git et GitHub qui ont été très bénéfique pour la réalisation de notre programme, car elle nous a permis de travailler de manière efficace et organisée.  
Il a également été un bon moyen pour nous de mettre en pratique les connaissances acquises lors de nos cours et de les appliquer à un projet concret.  
Cependant, il nous manque encore des compétences pour être totalement prêts pour notre futur métier d'ingénieur. Il est important de continuer à s'entraîner sur des projets plus complexes et de se familiariser avec d'autres outils de développement pour améliorer nos compétences en programmation. Ce TP nous a permis de consolider nos connaissances en programmation et d'acquérir de l'expertise dans la programmation orientée objet. Cependant, il est important de continuer à se former et à se développer pour devenir un ingénieur compétent et en mesure de relever les défis de notre futur métier de développeur.
