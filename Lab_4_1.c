#define _CRT_SECURE_NO_DEPRECATE
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
	printf("%c  %d  %.2f  %.15e\n\n", c, i, f, d);

	printf("Введите char >");
	scanf("%c", &c);
	printf("Введите integer >");
	scanf("%d", &i);
	printf("Введите float >");
	scanf("%f", &f);
	printf("Введите double >");
	scanf("%lf", &d);
	printf("%c  %d  %.2f  %.15e\n\n", c, i, f, d);	

	return 0;
}