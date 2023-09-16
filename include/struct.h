/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct.h
** First edition:
** 19:20:20 07/12/2021
*/

#ifndef PUSHSWAP_STRUCT_H
    #define PUSHSWAP_STRUCT_H

typedef struct list_s {
    int data;
    struct list_s *next;
} list_t, cell;

typedef struct entires_s {
    int n1;
    int n2;
    int i, j, k;
} entires_t;

cell *create_cell(int data);
list_t *emptylist(void);
list_t *sb(list_t *list_b);
list_t *addlist(list_t *, int data, int pos);
list_t *set_at(list_t *, int pos, int data);
list_t *free_at(list_t *, int pos);
list_t *sa(list_t *list_a);
list_t *pa(list_t **list_b, list_t **list_a);
list_t *pb(list_t **list_a, list_t **list_b);
list_t *ra(list_t **list_a);
list_t *rb(list_t **list_b);
list_t *rrb(list_t **list_b);
list_t *rra(list_t **list_a);
int lenlist(list_t *);
int my_get_nbr(char *str);
int *copy_in_array(list_t *list_a);
int check_list (int size, int **list);
int get_at(list_t *, int pos);
int isemptylist(list_t *);
int checkmin(list_t *list_a);
void my_putchar(char c);
void select_sort(list_t **list_a, list_t **list_b);
void sc(list_t **list_a, list_t **list_b);
void print_list(list_t *);
void free_list(list_t *);
void rr(list_t **list_a, list_t **list_b);
void printArray(int arr[], int size);
void my_putstr (char const *str);
void merge_sort(int arr[], int l, int r);
void insertion_sort(list_t **list_a, list_t **list_b);
void rrr(list_t **list_a, list_t **list_b);

#endif
