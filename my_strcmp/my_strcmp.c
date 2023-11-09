/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strcmp task
*/

#include <stdio.h>

int my_strcmp(const char *s1, const char *s2)
{
    if (s1 == NULL || s2 == NULL) {
        return NULL;
    }

    while (*s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}
