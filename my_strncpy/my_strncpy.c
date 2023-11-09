/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strncpy task
*/

#include <stdio.h>

char *my_strncpy(char *dest, const char *src, int n)
{
    if (src == NULL) {
        return NULL;
    }

    char *retuned_str = dest;

    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return retuned_str;
}
