/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strupcase task
*/

#include <stdio.h>

char *my_strupcase(char *str)
{
    if (str == NULL) {
        return NULL;
    }

    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }

        i++;
    }

    return str;
}
