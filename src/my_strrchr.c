/*
** EPITECH PROJECT, 2019
** my_strrchr.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strrchr(const char *str, char chr)
{
    int len = 0;
    int i = 0;

    if (!str || !chr)
        return (NULL);
    len = my_strlen(str);
    for (i = len - 1; (str[i] != chr) && (i >= 0); --i);
    if (str[i] == chr)
        return ((char *) &(str[i]));
    return (NULL);
}