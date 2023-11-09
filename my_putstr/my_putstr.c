/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My putstr task
*/

void my_putchar(char);

void my_putstr(const char *str) {
    int num_index = 0;

    while (str[num_index] != '\0') {
        char element = str[num_index];
        my_putchar(element);
        ++num_index;
    }
}
