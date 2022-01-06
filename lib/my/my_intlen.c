/*
** EPITECH PROJECT, 2021
** my_intlen.c
** File description:
** my_intlen.c
*/

#include "my.h"

int my_intlen(int nbr)
{
    int len;

    for (len = 0; nbr != 0; len++)
        nbr = nbr / 10;
    return len;
}
