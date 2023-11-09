/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My getnbr task
*/

int my_getnbr(const char *str) {
    int parsed_val = 0;
    int sign = 1;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    while (*str >= '0' && *str <= '9') {
        parsed_val = parsed_val * 10 + (*str - '0');
        str++;
    }

    return parsed_val * sign;
}
