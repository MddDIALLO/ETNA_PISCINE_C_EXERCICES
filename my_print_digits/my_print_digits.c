/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My print digits tast
*/

void my_putchar(char);

void my_print_digits(void)
{
    int i = 48;
    
    while (i <= 57) {
        my_putchar(i);
        ++i;
    }
}
