#include<stdio.h>
#include<stdlib.h>
void hw3(void)
{
	int a;
	printf("請輸入現在溫度: ");
	scanf("%d", &a);

	if (19<a&&a< 23)
		printf("請加一件薄外套!");
	if (13<a&&a<20)
	{
		printf("天氣冷，請穿上外套");
	}
	system("pause");
	return 0;

}