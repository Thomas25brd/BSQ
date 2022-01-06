/*
** EPITECH PROJECT, 2021
** Epitech
** File description:
** my_atoi.c
*/

#include "my.h"

int my_atoi(char *str)
{
    int res = 0;
    int i = 0;

    if (str[0] == '-' && str[1] != '\0')
        i++;
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        res = res + str[i] - '0';
        res = res * 10;
        i++;
    }
    res = res / 10;
    if (str[0] == '-')
        return (-1 * res);
    else
        return (res);
}
