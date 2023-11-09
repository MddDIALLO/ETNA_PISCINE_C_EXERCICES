/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My print comb task
*/

void my_putchar(char c);

void my_print_comb(void) 
{
    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 8; j++) {
            for (int k = j + 1; k <= 9; k++) {
                my_putchar(i + 48);
                my_putchar(j + 48);
                my_putchar(k + 48);
                if (i != 7 || j != 8 || k != 9) {
                    my_putchar(44);
                }
            }
        }
    }
}
