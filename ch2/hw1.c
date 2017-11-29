#include<stdio.h>
#include<stdlib.h>
void hw1(void)
{
	int sum, a;
	printf("叫块计: ");
	scanf("%d", &sum);
	a = sum % 2;
	if (a == 0)
		printf("案计");
	if (a == 1)
		printf("计");

	system("pause");
	return 0;
}