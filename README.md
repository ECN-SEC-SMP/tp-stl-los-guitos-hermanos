# Projet Ricochet Robots
***Le groupe est constitué de ASSE Romain, FERRE Cedric, PROCCACIA Paul et LEQUEUX Alexis.***

## Introduction

Ce projet a pour but d'implémenter le jeu ricochet. Ce projet sera l'occasion d'appliquer et donc de valider l'ensemble des concepts vues pendant les cours.

Ce projet sera réalisé en C++. Le suivi de version sera avec GIT.

## Regle de codage

### Attributs
Par défaut, les attributs seront privés, il sera cependant possible de modifier ces derniers avec des accesseurs.

### Convention de nommage
- Types start with upper case: `MyClass`.
- Functions and variables start with lower case: `myMethod`.
- Constants are all upper case: const double `PI=3.14159265358979323;`.
- Macro names use upper case with underscores: `INT_MAX`.
- Template parameter names use camel case: `InputIterator`.
- All other names use snake case: `unordered_map`.

### Langue

Le code sera rédigé en Anglais, les commentaires seront rédigés en francais.

### Fichiers d'en-tête

Les fichiers utiliseront l'entête suivante:

``` C++
/*
 * ASSE Romain FERRE Cedric, PROCACCIA Paul, LEQUEUX Alexis
 * tp ricochet robots
 *
 * Point d'entré du programme
 */

/******* Native include *******/
#include <iostream>

/******* Project include ******/
#include "MonFichier.h++"

/******* Espace de nommage ****/
using namespace std;

```

## Choix technique