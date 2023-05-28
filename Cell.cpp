/*
 * ASSE Romain FERRE Cedric, PROCACCIA Paul, LEQUEUX Alexis
 * tp ricochet robots
 *
 * Définition de la classe Cell
 */

/******* Native include *******/

/******* Project include ******/
#include "Cell.hpp"

/******* Espace de nommage ****/

Cell::Cell()
{
    walls = WALL_EMPTY;
    obj = NONE;
    host = false;
}

bool Cell::is_contains_robot() const
{
    return this->host ? true : false;
}

bool Cell::is_walled() const
{
    return this->walls ? true : false;
}

/**
 * @brief Permet d'ajouter un mur à la cellule
 * @param w Permet d'ajouter un ou plusieurs mur à la cellule (UP ou UP | LEFT)
 */
void Cell::add_wall(int w)
{
    walls = w;
}

/**
 * @brief Permet d'ajouter un objectif à la cellule
 * @param o Objectif à ajouter sur la cellule
 */
void Cell::add_objective(Objective o)
{
    obj = o;
}

int Cell::get_wall() const
{
    return walls;
}
Objective Cell::get_objective() const
{
    return obj;
}