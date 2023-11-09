/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strstr task
*/

#include <stdio.h>

char *my_strstr(char *str, const char *to_find)
{
    if (*to_find == '\0') {
        return str;
    }

    while (*str) {
        char *str_position = str;
        const char *position_str_to_find = to_find;

        while (*position_str_to_find && *str_position == *position_str_to_find) {
            str_position++;
            position_str_to_find++;
        }

        if (*position_str_to_find == '\0') {
            return str;
        }

        str++;
    }

    return NULL;
}
