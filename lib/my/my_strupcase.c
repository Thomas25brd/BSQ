/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** my_strupcase.c
*/

#include "my.h"

char *my_strupcase(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }
    return (str);
}
