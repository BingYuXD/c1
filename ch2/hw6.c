#include<stdio.h>
#include<stdlib.h>
void hw6(void)
{
	int i = 0, a, in;
	scanf("%d", &in);
	for (i = 1; i <= in; i++)
	{
		for (a = 1; a <= i; a++)
		{
			printf("*");

		}
		printf("\n");
	}




	system("pause");
	return 0;
}