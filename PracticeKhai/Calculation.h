#include<stdio.h>

int Calculation(int a1, int a2, int b, int number) {
	for (int i = 2; i <= number; i++)
	{
		b = a1;
		a1 = a2;
		a2 = b + a1;
	}
	return printf("Ваше искомое число: %d\n", a2);
}