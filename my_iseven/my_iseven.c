/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My iseven task
*/

void my_putchar(char);

void my_iseven(int n)
{
    int i;
    i = n % 2;
    
    if (i == 0) {
        my_putchar(69);
    } else {
        my_putchar(79);
    }
}
