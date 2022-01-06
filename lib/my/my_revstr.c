/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** my_revstr.c
*/

#include "my.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    int pos;
    char temp;

    for (pos = 0; pos < len; pos++) {
        temp = str[pos];
        str[pos] = str[len];
        str[len] = temp;
        len--;
    }
    return (str);
}
