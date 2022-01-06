/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** error_handling.c
*/

#include "bsq.h"

int error_handling(char *buff, int fd)
{
    if (buff[0] == '\0')
        return 84;
    if (fd == -1)
        return 84;
    return 0;
}
