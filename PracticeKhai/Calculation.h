#include<stdio.h>
/*������� Calculation ��������� ����� ���� int, ������� � ������� ������� �����
�������� �1-����� �����, ������ ����� � ���� ����������.
�������� �2-����� �����, ������ ����� � ���� ����������.
�������� b-����� �����, �������������� ����������(����� ��� �������).
�������� number-����� �����, ���������� ����� �������� �����.*/

int Calculation(int a1, int a2, int b, int number) {
	for (int i = 2; i <= number; i++)
	{
		b = a1;
		a1 = a2;
		a2 = b + a1;
	}
	return printf("���� ������� �����: %d\n", a2);
}