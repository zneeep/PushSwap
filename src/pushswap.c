/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
** First edition:
** 10:52:18 15/12/2021
*/

#include "../include/my.h"

int check_letters(char **argv, int ac)
{
    int rank;
    for (int i = 1; i < ac; i++) {
        rank = 0;
        while (argv[i][rank] != 0) {
            if (argv[i][rank] > 57 || argv[i][rank] < 48 && argv[i][rank] != '-')
                return 1;
            else if (argv[i][rank] == '-' && (argv[i][rank + 1] > 57 || argv[i][rank + 1] < 48))
                return 2;
            else {
                rank++;
            }
        }
    }
    return 0;
}

void disp_final(int size)
{
    for (int i = 0; i < size; i++) {
        if (i == size - 1) {
            write (1, "pa\n", 3);
        } else {
            write (1, "pa ", 3);
        }
    }
}

void reset(int ***list_a, int size)
{
    for (int i = 0; i < size; i++) {
        if ((*list_a)[i][1] == 2) {
            (*list_a)[i][1] = 1;
        }
    }
}

void disp_act (int *sorted, int **list_a, int size)
{
    int index = 0;
    int i = 0;

    while (i < size) {
        if (list_a[index][1] == 0)
            index++;
        if (index >= size)
            index = 0;
        if (list_a[index][1] == 1 && list_a[index][0] != sorted[i]) {
            list_a[index][1] = 2;
            write (1, "ra ", 3);
            index++;
        }
        if (list_a[index][0] == sorted[i] && list_a[index][1] != 0) {
            write (1, "pb ", 3);
            list_a[index][1] = 0;
            reset(&list_a, size);
            i++;
        }
    }
}

int main(int ac, char **argv)
{
    if (ac == 1 || check_letters(argv, ac) != 0) {
        write(2, "wrong or no argument\n", 21);
        return 84;
    }
    int sorted_array[ac - 1];
    int **list_a;
    list_a = malloc(sizeof(int *) * (ac - 1));
    for (int i = 0; i <= ac - 1; i++)
        list_a[i] = malloc(sizeof(int) * 2);
    for (int i = 1; i < ac; i++) {
        list_a[i - 1][0] = my_get_nbr(argv[i]);
        list_a[i - 1][1] = 1;
        sorted_array[i - 1] = my_get_nbr(argv[i]);
    }
    if (check_list(ac - 1, list_a) == 0)
        return 0;
    merge_sort(sorted_array, 0, ac - 2);
    disp_act(sorted_array, list_a, ac - 1);
    disp_final(ac - 1);
    return 0;
}