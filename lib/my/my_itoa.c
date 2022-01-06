/*
** EPITECH PROJECT, 2021
** my_itoa.c
** File description:
** my_itoa.c
*/

#include "my.h"

char *my_itoa(int nbr)
{
    int nbr_len = my_intlen(nbr);
    char *str = malloc(sizeof(char) * (nbr_len + 1));

    str[nbr_len] = '\0';
    nbr_len--;
    for (nbr_len; nbr_len >= 0; nbr_len--) {
        str[nbr_len] = nbr % 10 + '0';
        nbr = nbr / 10;
    }

    return (str);
}
