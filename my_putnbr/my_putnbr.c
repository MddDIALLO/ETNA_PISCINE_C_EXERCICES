/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My putnbr task
*/

#include <stdio.h>

void my_putchar(char c);

void my_putnbr(int n)
{
    if (n < 0) {
        my_putchar(45);
        n = -n;
    }

    char n_str[12];
    snprintf(n_str, sizeof(n_str), "%d", n);

    for (int i = 0; n_str[i] != '\0'; i++) {
        my_putchar(n_str[i]);
    }
}
