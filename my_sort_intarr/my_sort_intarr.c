/*
** ETNA PROJECT, 11/10/2023 by diallo_z
** /home/mdiandev/etna/piscine
** File description:
**      My sort intarr task
*/

void my_sort_intarr(int *array, int size)
{
    int temp;
    int swaping_check;

    do {
        swaping_check = 0;

        for (int i = 1; i < size; i++) {
            if (array[i - 1] > array[i]) {
                temp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = temp;
                swaping_check = 1;
            }
        }

    } while (swaping_check);

}
