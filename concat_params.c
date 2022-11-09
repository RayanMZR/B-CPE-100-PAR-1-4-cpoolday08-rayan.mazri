/*
** EPITECH PROJECT, 2022
** concat_params.c
** File description:
** day8
*/

#include <stdlib.h>

int my_strlen(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

char *concat_params(int argc, char **argv)
{
    int stock = 0;
    for (int i = 0; i < argc; i++)
        stock += my_strlen(argv[i]);
    stock += argc - 1;
    char *buffer = malloc(sizeof(char) * stock);
    int a = 0;
    for (int i = 0; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            buffer[a] = argv[i][j];
            a++;
        }
        if (i + 1 != argc) {
            buffer[a] = '\n';
            a++;
        }
    }
    return buffer;
}
