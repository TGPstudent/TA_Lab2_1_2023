﻿//TA_Lab2_1_2023.c Структури. Створення структури для зберігання даних та виведення ъх в таблицю.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct MyProj
{
	int Year;
	char Head[20];
	int Diameter;
	int Frequency;
};

int main(void)
{
	//Встановив кодування, підключив Укр. мову
	system("chcp 1251");
	setlocale(LC_CTYPE, "ukr");
	system("cls");
	//Задав строкові рядки Титульного та Коментувального написів
	char Title[] = {"Проекти пошуку наземних сигналів"};
	char Comment[] = {"Зауваження: спостерігались об’єкти від 2 зірок до декількох галактик"};
	//Масив структур ініціювали данними
	struct MyProj Str[] = { {1960, "Дрейк     ", 26, 1420}, {1978, "Хоровиць ", 300, 1665}, {1970, "Троїцький", 14, 1875} };
	
	printf("\n Таблиця до сортування має вигляд \n");
	printf("  _______________________________________________________________________ \n");
	printf(" | %s \t\t\t\t\t |\n", Title);
	printf(" |_______________________________________________________________________| \n");
	printf(" | Рік  | Науковий керівник | Діаметр антени (м) | Робоча частота (МГц)  |\n");
	printf(" |______|___________________|____________________|_______________________| \n");
	for (int j = 0; j < 3; j++)
	{
		printf(" | %d | %s\t    | %3.0d \t\t | %d\t\t\t |\n", Str[j].Year, Str[j].Head, Str[j].Diameter, Str[j].Frequency);
		printf(" |______|___________________|____________________|_______________________| \n");
	}
	printf(" | %s  |\n", Comment);
	printf(" |_______________________________________________________________________| \n");

	//Cортування методом більбашка
	for (int i = 3 - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			struct MyProj tmp;

			if (Str[j].Year > Str[j + 1].Year)
			{
				tmp = Str[j];
				Str[j] = Str [j + 1];
				Str[j + 1] = tmp;
			}
		}
	}
	printf("\n Таблиця після сортування має вигляд \n");
	printf("  _______________________________________________________________________ \n");
	printf(" | %s \t\t\t\t\t |\n", Title);
	printf(" |_______________________________________________________________________| \n");
	printf(" | Рік  | Науковий керівник | Діаметр антени (м) | Робоча частота (МГц)  |\n");
	printf(" |______|___________________|____________________|_______________________| \n");
	for (int j = 0; j < 3; j++)
	{
	printf(" | %d | %s\t    | %3.0d \t\t | %d\t\t\t |\n", Str[j].Year, Str[j].Head, Str[j].Diameter, Str[j].Frequency);
	printf(" |______|___________________|____________________|_______________________| \n");
	}
	printf(" | %s  |\n", Comment);
	printf(" |_______________________________________________________________________| \n");
	int getch(); getch();
	return 0;
}
