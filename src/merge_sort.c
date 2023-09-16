/*
** EPITECH PROJECT, 2021
** fusion_sort.c
** File description:
** fusion_sort.c
** First edition:
** 15:15:56 13/12/2021
*/

#include "../include/my.h"
#include <stdio.h>

void intiate_pos (entires_t *pos, int p, int n1, int n2)
{
    pos->k = p;
    pos->i = 0;
    pos->j = 0;
    pos->n1 = n1;
    pos->n2 = n2;
}

void second_merge (int arr[],entires_t pos, int l[], int m[])
{
    while (pos.i < pos.n1 && pos.j < pos.n2) {
        if (l[pos.i] <= m[pos.j]) {
            arr[pos.k] = l[pos.i];
            pos.i++;
        } else {
            arr[pos.k] = m[pos.j];
            pos.j++;
        }
        pos.k++;
    }
    while (pos.i < pos.n1) {
        arr[pos.k] = l[pos.i];
        pos.i++;
        pos.k++;
    }
    while (pos.j < pos.n2) {
        arr[pos.k] = m[pos.j];
        pos.j++;
        pos.k++;
    }
}

void merge(int arr[], int p, int q, int r)
{
    entires_t pos;
    int n1 = q - p + 1;
    int n2 = r - q;
    int l[n1], m[n2];

    for (int i = 0; i < n1; i++)
        l[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        m[j] = arr[q + 1 + j];
    intiate_pos(&pos, p, n1, n2);
    second_merge(arr, pos, l, m);
}

void merge_sort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;

        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
