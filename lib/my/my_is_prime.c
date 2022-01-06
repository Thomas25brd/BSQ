/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** my_is_prime.c
*/

#include "my.h"

int check_nb(int nb, int nb_2)
{
    for (nb_2 = 2; nb_2 != nb; nb_2++) {
        if (nb % nb_2 == 0)
            return (0);
    }
    return (1);
}

int my_is_prime(int nb)
{
    int nb_2;

    if (nb < 2)
        return (0);
    else
        return (check_nb(nb, nb_2));
}
