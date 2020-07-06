#include<stdio.h>

void Print(int a1, int a2, int b, int number) {
	printf("%d %d ", a1, a2);
	for (int i = 2; i <= number; i++)
	{
		printf("%d ", a1 + a2);
		b = a1;
		a1 = a2;
		a2 = b + a1;
	}
}