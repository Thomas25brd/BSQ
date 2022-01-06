/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** change_map_in_numbers.c
*/

#include "bsq.h"

char change_number(char **m, int t, int l)
{
    if ((m[l - 1][t] <= m[l - 1][t - 1]) && (m[l - 1][t] <= m[l][t - 1]))
        m[l][t] = m[l - 1][t] + 1;
    else if ((m[l][t - 1] <= m[l - 1][t - 1]) && (m[l][t - 1] <= m[l - 1][t]))
        m[l][t] = m[l][t - 1] + 1;
    else
        m[l][t] = m[l - 1][t - 1] + 1;
    return m[l][t];
}

char change_char(char **m, int top, int left)
{
    if ((m[left][top] == '.' && top == 0) || (m[left][top] == '.' && left == 0))
        m[left][top] = '1';
    else if (m[left][top] == 'o')
        m[left][top] = '0';
    else
        m[left][top] = change_number(m, top, left);
    return m[left][top];
}

char **change_map_in_number(char **map, int left_max)
{
    int top;
    int left;

    for (left = 0; left != left_max; left++) {
        for (top = 0; map[left][top] != '\n'; top++)
            map[left][top] == change_char(map, top, left);
        map[left][top] = '\n';
    }
    return map;
}
