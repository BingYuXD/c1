#include<stdio.h>
#include<stdlib.h>
void hw6_3(void)
{
	int i = 0, a, in, n;
	scanf("%d", &in);
	n = in;
	for (i = 1; i <= n; i++)
	{
		for (a = 1; a<i; a++)
		{
			printf(" ");
		}

		for (a = in; a > 0; a--)
		{
			printf("*");

		}

		printf("\n");
		in = in - 1;

	}




	system("pause");
	return 0;
}