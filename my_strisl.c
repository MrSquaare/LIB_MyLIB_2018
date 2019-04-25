/*
** EPITECH PROJECT, 2019
** my_strisl.c
** File description:
** LIB_MyLIB_2018
*/

#include "my.h"

int my_strisl(const char *str)
{
    int strisl = (str) ? 1 : 0;
    int negative = 0;

    if (str) {
        negative = (str[0] == '-') ? 1 : 0;
        for (int i = negative; strisl && (str[i] != '\0'); ++i)
            strisl = IS_NBR(str[i]);
    }
    return (strisl);
}