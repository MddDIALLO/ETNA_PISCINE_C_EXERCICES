/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My print rev alpha tast
*/

void my_putchar(char);

void my_print_revalpha(void)
{
    int i = 122;
	
    while (i >= 97) {
        my_putchar(i);
        --i;
    }
}

