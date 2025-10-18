#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <locale.h>;
#include <stdio.h>;

void main()
{	
	setlocale(LC_ALL, "RUS");

	int a, b, c;
	int condition;
	printf("Введите 3 значения уровня силы героев (через пробел)\n");
	scanf("%d %d %d", &a, &b, &c);
	condition = (a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0);
	printf("Способность активирована (1 - да, 0 - нет): %d\n", condition);

	return 0;
}