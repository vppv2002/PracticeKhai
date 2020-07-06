#include <stdio.h>
#include<windows.h>
#include <locale.h>
#include"Print.h"
#include"Calculation.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	int number, a1, a2, b = 0;
	a1 = 1;
	a2 = 1;
nachalo:
	printf("Введите номер числа, которое хотите найти: ");
	scanf_s("%d", &number);
	if (number < 0) {
		printf("Такого числа не существует! Попробуйте ещё.\n");
		goto nachalo;
	}
	printf("Ряд Фиббоначчи: ");
	if (number == 0) {
		printf("%d\n", a1);
		goto label;
	}
	Print(a1, a2, b, number);
	printf("\n");
label:
	Calculation(a1, a2, b, number);
	system("pause");
	return 0;
}