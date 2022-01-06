/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include "my.h"

int count_sign(char const *str)
{
    int sign = 0;

    for (int i = 0; '\0' != str[i]; i++) {
        if (str[i] == '-')
            sign++;
    }
    if (sign % 2 == 0)
        return (1);
    else
        return (-1);
}

int get_total_number(int i, char const *str)
{
    int res = 0;
    int len = 0;
    int nb;

    for (nb = i; str[nb] >= '0' && str[nb] <= '9'; nb++) {
        res = res * 10 + (str[nb] - '0');
        if (res < len)
            return (0);
        len = res;
    }
    res = res * count_sign(str);
    return (res);
}

int my_getnbr(char const *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            res = get_total_number(i, str);
            return (res);
        }
    }
    return (0);
}
