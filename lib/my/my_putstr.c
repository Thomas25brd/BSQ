/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}
