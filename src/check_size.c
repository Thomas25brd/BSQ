/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** check_size.c
*/

#include "bsq.h"

int check_top_size(char *buff, int i)
{
    int top_size = 0;

    for (; buff[i] != '\n'; i++)
        top_size++;
    return top_size;
}

int check_left_size(char *buff, int i)
{
    int left_size = 0;

    for (; buff[i] != '\0'; i++) {
        if (buff[i] == '\n')
            left_size++;
    }
    return left_size;
}
