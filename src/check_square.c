/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** check_square.c
*/

#include "bsq.h"

void check_corner(char **map, int top, int left, sqr_size *size)
{
    if (map[left][top] - 48 > size->corner) {
        size->corner = map[left][top] - 48;
        size->x = top;
        size->y = left;
    }
}

char **check_square(char **map, int top_max, int left_max)
{
    int top;
    int left;
    sqr_size *size = malloc(sizeof(sqr_size));

    size->corner = 0;
    size->x = 0;
    size->y = 0;
    for (left = 0; left != left_max; left++) {
        for (top = 0; map[left][top] != '\n'; top++)
            check_corner(map, top, left, size);
    }
    map = change_number_in_map(map, top_max, left_max, size);
    free(size);
    return map;
}
