/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strcpy task
*/

#include <stdio.h>

char *my_strcpy(char *dest, const char *src) 
{
    if (src == NULL) {
        return NULL;
    }

    char *retuned_str = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return retuned_str;
}
