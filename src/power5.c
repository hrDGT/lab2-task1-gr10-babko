/* Author: Yahor Babko */

/*
 * power5.c — реализация модуля проверки степени пяти.
 * Содержит определения функций is_power_of_five и print_powers_of_five.
 */

#include <stdio.h>

#include "power5.h"

/*
 * is_power_of_five — проверяет, является ли целое число n степенью пяти.
 * Возвращает 1, если n — степень пяти, иначе 0.
 *
 * Алгоритм: последовательно делим n на 5.
 * Если в итоге получаем 1 — число является степенью пяти.
 */
int is_power_of_five(int n)
{
        if (n <= 0) /* натуральные числа строго положительны */
                return 0;

        while (n % 5 == 0)
                n /= 5;

        return (n == 1);
}

/*
 * print_powers_of_five — перебирает массив arr длиной len
 * и выводит только те элементы, которые являются степенями пяти.
 */
void print_powers_of_five(int *arr, int len)
{
        int i; /* счётчик цикла */
        int found; /* флаг: найдена ли хотя бы одна степень */

        found = 0;

        printf("Степени пяти в массиве:\n");

        for (i = 0; i < len; i++) {
                if (is_power_of_five(arr[i])) {
                        printf("arr[%zu] = %d\n", i, arr[i]);
                        found = 1;
                }
        }

        if (!found)
                printf("(не найдено)\n");
}
