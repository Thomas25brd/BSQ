/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** print_square.c
*/

#include "bsq.h"

void print_map(char **map, int top, int left)
{
    for (int a = 0; a != left; a++) {
        write(1, map[a], top);
        free(map[a]);
    }
    free(map);
}
