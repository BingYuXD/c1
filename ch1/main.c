#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void ex1();
void ex2();
void hw1();
void hw2();
void hw3();
void hw4();



void main()
{
	_Bool flog = 1;
	while (flog)
	{


		printf("1.�����X��쪺�e��\n");
		printf("2.��J���scanf()\n");
		printf("3.hw1\n");
		printf("4.hw2\n");
		printf("5.hw3\n");
		printf("6.hw4\n");
		printf("------------------------\n");
		printf("�п�J�n����d��  ��0����  :");

		int input = 0;
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			hw1();
			break;
		case 4:
			hw2();
			break;
		case 5:
			hw3();
			break;
		case 6:
			hw4();
			break;

		default:
			break;
		}

		system("pause");
		system("cls");
	}

}