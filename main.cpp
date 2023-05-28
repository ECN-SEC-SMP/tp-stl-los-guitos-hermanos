/*
 * ASSE Romain FERRE Cedric, PROCACCIA Paul, LEQUEUX Alexis
 * tp ricochet robots
 *
 * Point d'entré du programme
 */

/******* Native include *******/
#include <iostream>

/******* Project include ******/
#include "Cell.hpp"

/******* Espace de nommage ****/
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Cell c1 = Cell();
    c1.add_objective(RED);
    Cell c2 = Cell();
    c2.add_wall(Cell::WALL_LEFT | Cell::WALL_DOWN);

    return 0;
}