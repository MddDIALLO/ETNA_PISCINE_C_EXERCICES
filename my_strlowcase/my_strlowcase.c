/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strlowcase task
*/

#include <stdio.h>

char *my_strlowcase(char *str)
{
    if (str == NULL) {
        return NULL;
    }

    char *str_to_return = str;

    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        str++;
    }

    return str_to_return;
}
