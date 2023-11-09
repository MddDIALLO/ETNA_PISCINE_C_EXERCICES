/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My print comb2 task
*/

#include <stdio.h>

void my_putchar(char c);

void my_print_comb2(void)
{
    for (int i = 0; i <= 99; i++) {
        for (int j = i + 1; j <= 99; j++) {
            if (i < 10) {
                my_putchar(48);
                my_putchar(i + 48);
            }else {
                char n_str[12];
                snprintf(n_str, sizeof(n_str), "%d", i);

                for (int t = 0; n_str[t] != '\0'; t++) {
                    my_putchar(n_str[t]);
                }
            }
            my_putchar(' ');
            if (j < 10) {
                my_putchar(48);
                my_putchar(j + 48);
            } else {
                char n_str[12];
                snprintf(n_str, sizeof(n_str), "%d", j);

                for (int t = 0; n_str[t] != '\0'; t++) {
                    my_putchar(n_str[t]);
                }
            }

            if (i != 98 || j != 99) {
                my_putchar(44);
                my_putchar(' ');
            }
        }
    }
}
