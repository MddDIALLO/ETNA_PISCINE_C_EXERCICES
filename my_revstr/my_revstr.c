/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My revstr task
*/

#include <stdio.h>

char *my_revstr(char *str) {
    if (str == NULL) {
        return NULL;
    }
    
    int length = 0;

    while (str[length] != '\0') {
        ++length;
    }

    int i, j;
    i = 0;
    j = length - 1;
    char temp_str;

    while (i < j)
    {
        temp_str = str[i];
        str[i] = str[j];
        str[j] = temp_str;
        ++i;
        --j;
    }

    return str;
}
