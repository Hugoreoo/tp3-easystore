# TP3 C++ : EasyStore

Notre TP a pour but de développer une application de commerce virtuel appelée EasyStore:

## Pourquoi avoir choisi ce TP

Nous avons choisi ce TP car il nous semblait être un bon moyen de progresser dans notre apprentissage de la programmation orientée objet. Celui-ci exigeait de développer un petit nombre de classes mais proposait de mettre en pratique des méthodes et des fonctions plus complexes. Il nous semblait donc plus intéressant que le second TP proposé, qui mettait davantage l'accent sur la création de nombreuses classes. De plus, la création d’un magasin virtuel nous semblait intéressant e semblait être un petit projet concret comme première expérience.

## Quelles sont nos méthodologies utilisées ?

Pour la réalisation de ce TP, nous avons utilisé une méthodologie de travail en équipe basée sur la répartition des tâches par question. Chacun de nous a été assigné à une question spécifique et nous avons travaillé sur cette question individuellement en utilisant nos branches respectives sur notre GitHub. Une fois que chacun avait terminé sa question, nous fusionnions, avec le merge, nos travaux sur la branche principale de notre répertoire, ce qui nous a permis de continuer à avancer ensemble sur le projet. Cette méthode nous a permis de diviser le travail en petites tâches gérables et de travailler de manière efficace en équipe.

## Quels outils avons nous utilisés ?

Pour réaliser notre projet à plusieurs, nous avons choisi d'utiliser l'outil Git et son site GitHub. Nous avons pu bénéficier de plusieurs avantages. Tout d'abord, cet outil nous a permis de travailler efficacement à plusieurs en nous permettant de nous répartir le travail à l'aide des branches comme cité précédemment. Chacun de nous a pu travailler sur une question spécifique dans sa propre branche et ensuite fusionner son travail avec la branche principale. Cela nous a permis de mieux organiser notre travail et de limiter les conflits de code.
De plus, Git nous a également permis de gérer efficacement le « versionning » de notre projet. Il a enregistré toutes les modifications apportées au code au fil du temps, ce qui nous a permis de revenir facilement à des versions précédentes de notre programme si nécessaire. Cela nous a également permis de conserver une sauvegarde générale de notre programme à tout moment.
Enfin, l'utilisation de Git nous a également offert la possibilité de travailler à distance, en équipe, sans devoir nous synchroniser physiquement.
Concernant les outils tels que les IDE, nous avons eu la possibilité d’utiliser CLion ainsi que VisualStudioCode qui sont deux IDE très puissants nous fournissant une grande aide pour la réalisation de ce TP.

## Description de notre programme

### Classe Client:

Nous avons créé la classe Client pour que le système de gestion de magasin soit. Cette classe Client contient des informations sur nos clients, telles que son nom, son prénom et un identifiant unique généré automatiquement. Elle contient également un panier d'achat qui est un tableau de pointeurs vers des objets de la classe Produit.
La classe Client possède plusieurs méthodes publiques qui permettent de gérer le panier d'achat du client. La méthode __addProductToCart__ permet d'ajouter un produit au panier, tandis que la méthode __clearCart__ permet de vider le panier. La méthode delProductToCart permet de supprimer un produit du panier d'achat.
Nous avons également surchargé l'opérateur « __<<__ » pour pouvoir afficher les informations du client dans un flux de sortie (un terminal). Cela permet d'afficher facilement les informations du client en utilisant un simple appel de la méthode « __std::cout__ ».
Enfin, nous avons écrit une fonction helper __isClient__ qui prend en entrée le nom et le prénom d’un client et qui retourne vrai si les informations du client son correcte avec nos attributs, et faux sinon. Nous avons également écrit une fonction helper __editAmountCart__ pour pouvoir changer la quantité d'un produit dans le panier d'achat.
