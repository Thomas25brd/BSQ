/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** square_size.h
*/

#ifndef SQUARE_SIZE_H_
    #define SQUARE_SIZE_H_

    typedef struct {
        int x;
        int y;
        int corner;
    } sqr_size;

    char **check_square(char **, int, int);
    void check_corner(char **, int, int, sqr_size *);

#endif /* SQUARE_SIZE_H_ */
