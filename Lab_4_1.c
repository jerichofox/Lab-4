#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <locale.h>;
#include <stdio.h>;

void main()
{
	setlocale(LC_ALL, "RUS");	

	char c = '*';
	int i = 5;
	float f = 6.21f;
	double d = 7e-11;
	printf("%c  %d  %.2f  %lg\n\n", c, i, f, d);

	printf("Введите char >");
	scanf("%c", &c);
	printf("Введите integer >");
	scanf("%d", &i);
	printf("Введите float >");
	scanf("%f", &f);
	printf("Введите double >");
	scanf("%lg", &d);
	printf("%c  %d  %.2f  %lg\n\n", c, i, f, d);	

	printf("%d %g\n", (int)f, f-(int)f); //1a
	printf("%d %x\n", c, c); //1б
	printf("%g\n", (float)i / 10);

	return 0;
}