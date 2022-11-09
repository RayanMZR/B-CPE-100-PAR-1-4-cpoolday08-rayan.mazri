/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** day8
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i;
    for (i = 0; src[i] != '\0'; i++);
    char *dest = malloc(i);
    for (int j = 0; j < i; j++)
        dest[j] = src[j];
    return dest;
}
