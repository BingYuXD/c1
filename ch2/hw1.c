#include<stdio.h>
#include<stdlib.h>
void hw1(void)
{
	int sum, a;
	printf("�п�J�@�ӼƦr: ");
	scanf("%d", &sum);
	a = sum % 2;
	if (a == 0)
		printf("����");
	if (a == 1)
		printf("�_��");

	system("pause");
	return 0;
}