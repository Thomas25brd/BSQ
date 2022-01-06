/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** main.c
*/

#include "bsq.h"

int main(int argc, char **argv)
{
    char *buff;
    int fd = open(argv[1], O_RDONLY);
    struct stat *name;
    int size = 0;

    name = malloc(sizeof(struct stat));
    stat(argv[1], name);
    size = name->st_size;
    buff = malloc(sizeof(char) * size + 1);
    read(fd, buff, size);
    buff[size] = '\0';
    free(name);
    if (argc != 2)
        return 84;
    else if (error_handling(buff, fd) == 84)
        return 84;
    else
        return my_bsq(buff);
}
