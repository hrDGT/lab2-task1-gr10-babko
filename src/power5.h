/* Author: Yahor Babko */

#ifndef POWER5_H
#define POWER5_H

/*
 * power5.h — интерфейс модуля проверки степени пяти.
 * Предоставляет функции:
 *   is_power_of_five — проверяет, является ли число степенью пяти;
 *   print_powers_of_five — выводит все степени пяти из массива.
 */

/* Прототипы функций */

/*
 * is_power_of_five — возвращает 1, если n является степенью пяти,
 * иначе возвращает 0.
 */
int is_power_of_five(int n);

/*
 * print_powers_of_five — выводит элементы массива arr длиной len,
 * которые являются степенями пяти.
 */
void print_powers_of_five(int *arr, int len);

#endif /* POWER5_H */
