/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strlen task
*/

int my_strlen(const char *str) {
    int number_of_char = 0;

    while (str[number_of_char] != '\0') {
        number_of_char++;
    }

    return (number_of_char);
}
