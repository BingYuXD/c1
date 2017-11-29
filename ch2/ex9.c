#include <stdio.h>
#include <stdlib.h>
void ex9(void)
{
	float a, b;
	char oper;
	printf("Please input the expression:(ex:3+2):"); 
	scanf("%f %c %f", &a, &oper, &b);
	switch (oper)
	{
	case '+':
		printf("%.0f+%.0f=%.0f\n", a, b, a + b); 
		break;
	case '-':
		printf("%.0f-%.0f=%.0f\n", a, b, a - b); 
		break;
	case '*':
		printf("%.0f*.0f=%.0f\n", a, b, a*b); 
		break;
	case '/':
		printf("%.0f/%.0f=%.3f\n", a, b, a / b);
		break;
	default:
		printf("input error!!\n"); 
	}
	system("pause");
	return 0;
}