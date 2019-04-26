/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** LIB_MyLIB_2018
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int main(void)
{
    char *itoa = my_itoa(200);
    char *strchr = my_strchr("Hello, World!", 'W');
    char *strchrs = my_strchrs("Hello, World!", "Wl");
    char *strcln = my_strcln("Hello,          World!", ' ');
    char *strdup = my_strdup("Hell0, W0rld!");
    char *tok = my_strdup("This is-a sentence");
    char *split = my_strdup("This is another sentence");
    char **strsplit = my_strsplit(split, " i");
    char *param1[] = {"Hello", " ", "World!", NULL};

    my_putchar('A');
    my_puts("BCDEF");
    my_strlen("BCDEF");
    my_puts(itoa);
    my_puts(strchr);
    my_puts(strchrs);
    my_puts(strcln);
    my_puts(strdup);
    my_puts(my_strrpl(strdup, '0', 'o'));
    my_puts(my_strtok(tok, " -"));
    my_puts(my_strtok(NULL, " -"));
    my_puts(my_strtok(NULL, " -"));
    my_puts(my_strtok(NULL, " -"));
    for (int i = 0; strsplit[i] != NULL; ++i)
        my_puts(strsplit[i]);
    printf("%d", my_arrlen((void **) strsplit));
    printf("%lf", my_strtod("3.14159265359"));
    printf("%d", my_strtoi("-200"));
    printf("%ld", my_strtol("20000000000"));
    my_putlist(param1);
    free(itoa);
    free(strcln);
    free(strdup);
    free(tok);
    free(split);
    my_arrfree((void **) strsplit);
}