/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** print_square.c
*/

#include "bsq.h"

char **print_square(char **map, sqr_size *size)
{
    int x;
    int y;

    for (y = size->y - size->corner + 1; y != size->y + 1; y++) {
        for (x = size->x - size->corner + 1; x != size->x + 1; x++)
            map[y][x] = 'x';
    }
    return map;
}

char remove_number(char **map, int x, int y, sqr_size *size)
{
    map = print_square(map, size);

    if (map[y][x] == '0')
        map[y][x] = 'o';
    else if (map[y][x] == 'x' && (x <= size->x && y <= size->y))
        map[y][x] = 'x';
    else
        map[y][x] = '.';
    return map[y][x];
}
