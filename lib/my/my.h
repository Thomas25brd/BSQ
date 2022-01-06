/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#ifndef MY_H_
    #define MY_H_

    void my_putchar(char);
    void my_swap(int *, int *);
    void my_sort_int_array(int *, int);
    int my_isneg(int);
    int my_intlen(int);
    int my_atoi(char *);
    int my_put_nbr(int);
    int my_is_prime(int);
    int my_find_prime_sup(int);
    int my_putstr(char const *);
    int my_strlen(char const *);
    int my_getnbr(char const *);
    int my_showstr(char const *);
    int count_sign(char const *);
    int my_str_isnum(char const *);
    int my_compute_square_root(int);
    int my_str_islower(char const *);
    int my_str_isupper(char const *);
    int my_str_isalpha(char const *);
    int my_str_isprintable(char const *);
    int my_showmem(char const *, int);
    int my_compute_power_rec(int, int);
    int get_total_number(int, char const *);
    int my_strcmp(char const *, char const *);
    int my_strncmp(char const *, char const *, int);
    char *my_itoa(int);
    char *my_revstr(char *);
    char *my_strupcase(char *);
    char *my_strlowcase(char *);
    char *my_strcapitalize(char *);
    char *my_strcat(char *, char const *);
    char *my_strcpy(char *, char const *);
    char *my_strstr(char *, char const *);
    char *my_strncpy(char *, char const *, int);
    char *my_strncat(char *, char const *, int);

#endif /* MY_H_ */
