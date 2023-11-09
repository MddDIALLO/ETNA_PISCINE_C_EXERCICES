/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strcapitalize task
*/

#include <stdio.h>

char *my_strcapitalize(char *str)
{
    int next_capitalizing_check = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || (str[i] < 'A' && (str[i] < 'a' || str[i] > 'z'))) {
            next_capitalizing_check = 1;
        } else if (next_capitalizing_check) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
            next_capitalizing_check = 0;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    return str;
}
