#include<stdio.h>
#include<stdlib.h>
void hw1(void)
{
	int sum, a;
	printf("請輸入一個數字: ");
	scanf("%d", &sum);
	a = sum % 2;
	if (a == 0)
		printf("偶數");
	if (a == 1)
		printf("奇數");

	system("pause");
	return 0;
}