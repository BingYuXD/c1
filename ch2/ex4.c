#include<stdio.h>
#include<stdlib.h>

void ex4()
{
	int s;
	printf("Please input a score:");
	scanf("%d", &s);

	if ((s<0) || (s>100))
		printf("input error!!\n");
	if ((s<60) && (s>49))
		printf("make up exams!!\n");




}