/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** my_str_isalpha.c
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;
    int count = 0;

    if (str[i] == '\0')
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
            count = 1;
    }
    if (count == 1)
        return (0);
    else
        return (1);
}
