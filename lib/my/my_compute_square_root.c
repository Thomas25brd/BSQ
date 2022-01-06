/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** my_compute_square_root.c
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int result = 2;
    int root = 2;

    if (nb == 1)
        return (1);
    if (nb <= 0)
        return (0);
    while (root < nb) {
        if (root * root == nb)
            return (root);
        else
            root++;
    }
    return (0);
}
