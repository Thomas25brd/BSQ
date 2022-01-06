/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** change_buff_in_map.c
*/

#include "bsq.h"

char **change_buff_in_map(char *buff, int top, int left)
{
    int i;
    int j;
    int k = 0;
    char **map = malloc(sizeof(char *) * (top * left) + 1);

    while (buff[k] != '\n')
        k++;
    k++;
    for (i = 0; buff[k] != '\0'; i++) {
        map[i] = malloc(sizeof(char) * top);
        for (j = 0; buff[k] != '\n'; j++) {
            map[i][j] = buff[k];
            k++;
        }
        map[i][j] = buff[k];
        k++;
    }
    free(buff);
    return map;
}
