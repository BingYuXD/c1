#include<stdio.h>
#include<stdlib.h>
void hw4(void)
{
	int a, b, t, t1;
	printf("�п�J�ï]�����P�Q�s���K�U�X�M\n");
	scanf("%d%d", &a, &b);
	t = a * 45 + b * 55;
	t1 = a + b;
	if (t >= 800 && t1 > 15)
	{
		t = t*0.9;
		printf("�ʶR�`�ƶW�L15�~�A�åB�`�B�F800���A�ɦ�9���u�f�A�`�B:%d", t);
	}

	else
	{
		printf("�`�B:%d", t);
	}

	system("pause");
	return 0;
}