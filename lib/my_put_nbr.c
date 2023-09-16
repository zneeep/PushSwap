/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_put_nbr
*/

#include "unistd.h"

void my_putchar(char c);

void print_min (void)
{
    my_putchar('-');
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

int my_put_nbr(int nb)
{
    if (nb == (-2147483648)) {
        print_min();
    }
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    } else if (nb >= 0 && nb < 10)
        my_putchar('0' + nb);
    else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return 0;
}
