#include<stdio.h>
#include<locale.h>
#include"Car.h"
void name()
{
	puts("������ ����-223");
	puts("��������� ������� ������������");
}
void main()
{
	setlocale(LC_ALL, "Rus");
	name();
	Car();
}