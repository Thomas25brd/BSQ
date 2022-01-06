/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** my_str_isnum.c
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <= 57)
            i++;
        else
            return (0);
    }
    return (1);
}
