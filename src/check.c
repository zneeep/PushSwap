/*
** EPITECH PROJECT, 2021
** check.c
** File description:
** check.c
** First edition:
** 20:18:10 18/12/2021
*/

#include "../include/my.h"

int check_start(int **list_a, int size)
{
    int i = 0;

    while (list_a[i][1] != 1 && i < size)
        i++;
    return i;
}

int check_next (int **list_a, int pos)
{
    int result = pos;
    while (list_a[result][1] != 1)
        result++;
    return result - pos;
}

int check_shorter (int data, int **list, int size)
{
    int i;
    int pos = 0;

    for (i = 0; i < size; i++) {
        if (list[i][0] != data && list[i][1] == 1)
            pos++;
        else if (list[i][0] == data && list[i][1] == 1 &&
        (float)(pos + 1) / size <= 0.5)
            return 1;
    }
    return 0;
}

int check_list (int size, int **list)
{
    for (int i = 1; i < size; i++) {
        if (list[i - 1][0] > list[i][0])
            return 84;
    }
    my_putchar('\n');
    return 0;
}
