/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strcat task
*/

#include <stdio.h>

char *my_strcat(char *dest, const char *src)
{
    if (dest == NULL || src == NULL) {
        return NULL;
    }

    char *dest_pointer = dest;

    while (*dest_pointer != '\0') {
        dest_pointer++;
    }

    while (*src != '\0') {
        *dest_pointer = *src;
        dest_pointer++;
        src++;
    }

    *dest_pointer = '\0';

    return dest;
}
