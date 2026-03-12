/* Author: Student */

/*
 * main.c — точка входа программы.
 * Получает размер массива из аргументов командной строки,
 * заполняет массив псевдослучайными натуральными числами,
 * выводит массив на экран и печатает все элементы, являющиеся степенями пяти.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "power5.h"

/* Верхняя граница случайных чисел */
#define RAND_MAX_VAL 3125

int main(int argc, char  *argv[])
{
				int *arr; /* массив натуральных чисел */
				int n; /* размер массива */
				int i; /* счётчик цикла */

				if (argc != 2) {
								fprintf(stderr, "Использование: %s <n>\n", argv[0]);
								return 1;
				}

				n = atoi(argv[1]);

				if (n <= 0) {
								fprintf(stderr, "Ошибка: n должно быть положительным числом.\n");
								return 1;
				}

				arr = malloc((size_t)n * sizeof(int));

				if (arr == NULL) {
								fprintf(stderr, "Ошибка: не удалось выделить память.\n");
								return 1;
				}

				srand((unsigned)time(NULL));

				/* Заполнение массива случайными числами в диапазоне [1, RAND_MAX_VAL] */
				for (i = 0; i < n; i++)
								arr[i] = rand() % RAND_MAX_VAL + 1;

				/* Вывод исходного массива */
				printf("Массив (n = %d):\n", n);
				for (i = 0; i < n; i++)
								printf("  arr[%d] = %d\n", i, arr[i]);

				printf("\n");

				/* Вывод степеней пяти */
				print_powers_of_five(arr, (size_t)n);

				free(arr);

				return 0;
}
