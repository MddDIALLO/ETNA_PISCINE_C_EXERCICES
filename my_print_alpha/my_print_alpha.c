/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My print alpha task
*/

void my_putchar(char);

void my_print_alpha(void)
{
    int i = 97;

    while (i <= 122) {
        my_putchar(i);
        ++i;
    }
    
    my_putchar('\n');
}

