## Bibliothèque Statique libGeometry.a

Cette bibliothèque regroupe plusieurs fichiers contenant du code en C++ qui génèrent des formes géométriques.

Pour mieux structurer les données de chaque forme géométrique, on a eu recours à la Programmation Orientée Objet avec le langage C++.

À partir de ces fichiers `.cpp` et `.hpp`, on génère des fichiers `.o` pour la construction de la bibliothèque à partir des commandes suivantes :

g++ -c *.cpp:

Cette commande utilise le compilateur C++ g++ pour compiler tous les fichiers *.cpp du dossier actuel.
L'option -c indique à g++ de créer des fichiers objets (*.o) au lieu d'un exécutable.
L'astérisque (*) indique à g++ de compiler tous les fichiers *.cpp du dossier.

ar -rv libGeometry.a *.o:

Cette commande utilise l'outil d'archivage ar pour créer une bibliothèque statique nommée libGeometry.a.
L'option -r indique à ar de créer une archive.
L'option -v indique à ar d'afficher des informations sur le processus de création.
libGeometry.a est le nom de la bibliothèque statique à créer.
L'astérisque (*) indique à ar d'ajouter tous les fichiers *.o du dossier à la bibliothèque.
