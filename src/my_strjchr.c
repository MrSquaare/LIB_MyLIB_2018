/*
** EPITECH PROJECT, 2019
** my_strjchr.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

char *my_strjchr(const char *str, char chr, const char *jump)
{
    int i = 0;

    if (!str || !chr)
        return (NULL);
    while (str[i] && (str[i] != chr)) {
        for (i += 0; str[i] && (str[i] != chr)
            && !my_strchr(jump, str[i]); ++i);
        i += my_strjump(&str[i], jump);
    }
    if (str[i] == chr)
        return ((char *) &(str[i]));
    return (NULL);
}