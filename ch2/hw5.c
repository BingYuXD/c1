#include<stdio.h>
#include<stdlib.h>
void hw5(void)
{
	int a, b, t, t1;
	printf("�п�J�ï]�����P�Q�s���K�U�X�M\n");
	scanf("%d%d", &a, &b);
	t = a * 45 + b * 55;
	t1 = a + b;
	if (t1>12 || t >= 700 || a >= 10)
	{
		t = t*0.95;
		printf("�ʶR�`�ƶW�L12�~���`�B�F700���άï]�����ʶR�F10�~�A�ɦ�95���u�f�A�`�B:%d", t);
	}

	else
	{
		printf("�`�B:%d", t);
	}

	system("pause");
	return 0;
}