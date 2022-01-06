/*
** EPITECH PROJECT, 2021
** Semester_1
** File description:
** bsq.h
*/

#include "my.h"
#include "square_size.h"

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

#ifndef BSQ_H_
    #define BSQ_H_

    int main(int, char **);

    // MY_BSQ FUNCTIONS
    int my_bsq(char *);
    int first_corner(char *);
    int error_handling(char *, int);
    char **change_buff_in_map(char *, int, int);

    // CHECK_SIZE FUNCTIONS
    int check_top_size(char *, int);
    int check_left_size(char *, int);

    // CHECK_SQUARE FUNCTIONS
    char **check_square(char **, int, int);
    void check_corner(char **, int, int, sqr_size *);

    // CHANGE_MAP_IN_NUMBER FUNCTIONS
    char **change_map_in_number(char **, int);
    char change_char(char **, int, int);
    char change_number(char **, int, int);
    char **change_number_in_map(char **, int, int, sqr_size *);

    // PRINT FUNCTIONS
    char **print_square(char **, sqr_size *);
    char remove_number(char **, int, int, sqr_size *);
    void print_map(char **, int, int);

#endif /* BSQ_H_ */
