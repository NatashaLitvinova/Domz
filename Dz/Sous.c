#include<stdio.h>
#include<locale.h>
#include"Car.h"
void name()
{
	puts("Группа бИСТ-223");
	puts("Литвинова Наталья Владимировна");
}
void main()
{
	setlocale(LC_ALL, "Rus");
	name();
	Car();
}