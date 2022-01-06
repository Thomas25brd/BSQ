/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** my_strcat.c
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j;

    while (dest[i] != '\0')
        i++;
    for (j = 0; src[j] != '\0'; j++) {
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
