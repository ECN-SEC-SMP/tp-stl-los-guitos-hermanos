/*
 * ASSE Romain FERRE Cedric, PROCACCIA Paul, LEQUEUX Alexis
 * tp ricochet robots
 *
 * Déclaration de la classe Cell
 * Cette classe représente la plus petite entité de notre plateau. L'objet cellule représente une case de notre plateau
 */

#pragma once

enum Objective
{
	NONE = 0,
    RED,
	BLUE,
	GREEN,
    YELLOW,
    MULTICOLOR
};

class Cell
{
    private:
        int walls;
        Objective obj;
        bool host;

    public:
        static const int WALL_EMPTY = 0;
        static const int WALL_LEFT = (1 << 1);
        static const int WALL_RIGHT = (1 << 2);
        static const int WALL_UP = (1 << 3);
        static const int WALL_DOWN = (1 << 4);
        Cell();
        //~Cell();

        bool is_contains_robot() const;
        bool is_walled() const;
        void add_wall(int w);
        int get_wall() const;
        Objective get_objective() const;
        void add_objective(Objective o);
};