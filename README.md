# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

# Question veille technologique

# question 1

la methode qu'on a peu ou presque pas vu en classe est la methode getLine. getLine permet de lire du text a partir d'un flux et de stocker la ligne dans une chaine. Avec la methode getLine on il y a deux ou trois parametres dans notre cas on en utilise 3. Donc getLine(source, destination, delim). source est le flux d'entree la destination doit etre une variable ou sera stockee la ligne lue et demlim qui est optionnel est un caractere qui indique jusqu'ou s'arreter dans notre cas dans book.cpp on s'arrete a chaque pipe |.

# question 2

Pour mieux gerer la bibliotheque, une base de donnees SQL serait impportant, egalement avoir une structure client-serveur pour bien gerer les different besoins. J'utiliserais un langage plus facile que le c++ comme du python pour gerer la base de donnee. A la place d'avoir une interface dans le terminal, je ferais une interface graphique avec une bibliotheque c++ comme Qt ou wxWidgets.