#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <locale.h>;
#include <stdio.h>;

void main()
{
	setlocale(LC_ALL, "RUS");

	int n;
	printf("Введите 3х-значное число\n");
	scanf("%d", &n);
	printf("Последняя цифра: %d, первая: %d, сумма цифр: %d, число, записанное наоборот: %d",
		     n%10,
		     n/100, 
		     n%10 + n/100 + ((n/10)%10), 
		    (n%10)*100 + ((n/10)%10)*10 + n/100);

	return 0;
}