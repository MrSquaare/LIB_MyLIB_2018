/*
** EPITECH PROJECT, 2019
** test_my_putchar.c
** File description:
** LIB_MyLIB_2018
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int my_putchar(int c);

Test(my_putchar, valid, .init = cr_redirect_stdout)
{
    char param1 = 'A';
    char *expected = "A";

    my_putchar(param1);
    cr_assert_stdout_eq_str(expected);
}