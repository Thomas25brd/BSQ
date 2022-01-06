/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** change_number_in_map.c
*/

#include "bsq.h"

char **change_number_in_map(char **map, int top, int left, sqr_size *size)
{
    int x;
    int y;

    for (y = 0; y != left; y++) {
        for (x = 0; map[y][x] != '\n'; x++)
            map[y][x] = remove_number(map, x, y, size);
        map[y][x] = '\n';
    }
    return map;
}
