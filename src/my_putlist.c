/*
** EPITECH PROJECT, 2019
** my_putlist.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdlib.h>
#include "my.h"

void my_putlist(char * const *list)
{
    for (int i = 0; list && list[i]; ++i)
        my_puts(list[i]);
}