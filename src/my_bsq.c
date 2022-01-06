/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** my_bsq.c
*/

#include "bsq.h"

int first_corner(char *buff)
{
    int i = 0;

    while (buff[i] != '\n')
        i++;
    i++;
    return i;
}

int my_bsq(char *buff)
{
    int i = first_corner(buff);
    int top = check_top_size(buff, i) + 1;
    int left = check_left_size(buff, i);
    char **map = change_buff_in_map(buff, top, left);

    map = change_map_in_number(map, left);
    map = check_square(map, top, left);
    print_map(map, top, left);
    return 0;
}
