/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_putstr
*/

#include "unistd.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}

void my_putstr (char const *str)
{
    int nb = 0;

    while (str[nb] != '\0') {
        my_putchar (str[nb]);
        nb++;
    }
}
