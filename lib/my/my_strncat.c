/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** my_strncat.c
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0; i < nb && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}
