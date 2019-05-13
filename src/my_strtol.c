/*
** EPITECH PROJECT, 2019
** my_strtol.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

long my_strtol(const char *str)
{
    long strtol = 0;
    int len = 0;
    int negative = 0;

    if (str && my_strisl(str)) {
        len = my_strlen(str);
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; i < len; ++i)
            strtol = strtol * 10 + (str[i] - '0');
        strtol *= (negative) ? -1 : 1;
    }
    return (strtol);
}