/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include "my.h"

int my_put_nbr(int nb)
{
    long n = nb;

    if (n < 0) {
        n = -n;
        my_putchar('-');
    }
    if (n <= 9)
        my_putchar(n + '0');
    else {
        my_put_nbr(n / 10);
        my_putchar(n % 10 + '0');
    }
    return (0);
}
