/*
** ETNA PROJECT, 12/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My strncmp task
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    while (n > 0) {
        if (*s1 != *s2) {
            return (*s1 - *s2);
        }

        if (*s1 == '\0') {
            return 0;
        }

        s1++;
        s2++;
        n--;
    }

    return 0;
}
