#include <locale.h>;
#include <stdio.h>;

void main()
{
	setlocale(LC_ALL, "RUS");

	int a = 11, b = 3;
	int x;
	float y;
	double z;

	x = a / b;
	y = a / b;
	z = a / b;
	printf("%d - результат сохранен в переменную типа int\n", x);
	printf("%f - результат сохранен в переменную типа float\n", y);
	printf("%lf - результат сохранен в переменную типа double\n\n", z);

	printf("%f\n",(float)a / b); //6
	printf("%lf\n", (double)a / b);	

	return 0;
}