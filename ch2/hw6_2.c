#include<stdio.h>
#include<stdlib.h>
void hw6_2(void)
{
	int i = 0, a, in, n;
	scanf("%d", &in);
	n = in;
	for (i = 1; i <= in; i++)
	{
		for (a = n - 1; a> 0; a--)
		{
			printf(" ");
		}
		for (a = 1; a <= i; a++)
		{
			printf("*");

		}
		n = n - 1;

		printf("\n");
	}




	system("pause");
	return 0;
}