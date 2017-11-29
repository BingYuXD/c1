#include<stdio.h>
#include<stdlib.h>
void hw4(void)
{
	int a, b, t, t1;
	printf("請輸入珍珠奶茶與烏龍拿鐵各幾杯\n");
	scanf("%d%d", &a, &b);
	t = a * 45 + b * 55;
	t1 = a + b;
	if (t >= 800 && t1 > 15)
	{
		t = t*0.9;
		printf("購買總數超過15瓶，並且總額達800元，享有9折優惠，總額:%d", t);
	}

	else
	{
		printf("總額:%d", t);
	}

	system("pause");
	return 0;
}