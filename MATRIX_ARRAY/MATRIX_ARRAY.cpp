#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    printf("Введите кол-во строк: ");
    scanf("%i", &n);
    printf("Введите кол-во столбцов: ");
    scanf("%i", &m);

    printf("Введите элементы: \n");
    int mas [100][100];
    for (int i = 0; i < n; i++)  // Заполняем двумерный массив!
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%i", &mas[i][j]);
        }
    }

    printf("\n\n");

    for (int i = 0; i < n; i++)   // Выводим двумерный массив в консоли!
    {
        for (int j = 0; j < m; j++)
        {
            printf("%3i", mas[i][j]);
        }
        printf("\n");
    }
}