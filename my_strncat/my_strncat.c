/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strncat task
*/

#include <stdio.h>

char *my_strncat(char *dest, const char *src, int n)
{
    if (dest == NULL || src == NULL) {
        return NULL;
    }

    char *dest_starting_point = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return dest_starting_point;
}
