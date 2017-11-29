#include<stdio.h>
#include<stdlib.h>
void hw5(void)
{
	int a, b, t, t1;
	printf("請輸入珍珠奶茶與烏龍拿鐵各幾杯\n");
	scanf("%d%d", &a, &b);
	t = a * 45 + b * 55;
	t1 = a + b;
	if (t1>12 || t >= 700 || a >= 10)
	{
		t = t*0.95;
		printf("購買總數超過12瓶或總額達700元或珍珠奶茶購買達10瓶，享有95折優惠，總額:%d", t);
	}

	else
	{
		printf("總額:%d", t);
	}

	system("pause");
	return 0;
}