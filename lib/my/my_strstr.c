/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** my_strstr.c
*/

#include "my.h"

int check_to_find(char *str, char const *to_find, int i)
{
    int j;
    int res = 0;

    for (j = 0; to_find[j] != '\0'; j++) {
        if (to_find[j] == str[i])
            res = 1;
        else
            return (0);
        i++;
    }
    return (res);
}

char *my_strstr(char *str, char const *to_find)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[0] && check_to_find(str, to_find, i) == 1)
            return (&str[i]);
    }
    return (0);
}
