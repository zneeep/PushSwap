/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_getnbr
*/

int my_get_nbr(char *str)
{
    int i = 0;
    int value = 0;
    int sign = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign++;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        value = value * 10;
        value += str[i] - 48;
        i++;
    }
    if (sign % 2 == 1)
        value *= -(sign %= 2);
    return (value);
}
