#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();
void ex11();
void hw1();
void hw2();
void hw3();
void hw4();
void hw5();
void hw6();
void hw6_1();
void hw6_2();
void hw6_3();
void hw6_4();

void main()
{
	_Bool flog = 1;
	while (flog)
	{


		printf("1.����ǦC�P�榡�X������\n");
		printf("2.�l�ƹB��l\n");
		printf("3.���W�P����B��l\n");
		printf("4.�޿�B��l\n");
		printf("5.�_�� if �ԭz���m��\n");
		printf("6.if-else-if �ԭz������\n");
		printf("7.if �P else ���t����D\n");
		printf("8.����B��l���d��\n");
		printf("9.switch �ԭz���d��\n");
		printf("10.while�j�骺�d��\n");
		printf("11.�H�_��while�j���g�E�E���k��\n");
		printf("12.hw1\n");
		printf("13.hw2\n");
		printf("14.hw3\n");
		printf("15.hw4\n");
		printf("16.hw5\n");
		printf("17.hw6\n");
		printf("18.hw6_1\n");
		printf("19.hw6_2\n");
		printf("20.hw6_3\n");
		printf("21.hw6_4\n");
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
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 6:
			ex6();
			break;
		case 7:
			ex7();
			break;
		case 8:
			ex8();
			break;
		case 9:
			ex9();
			break;
		case 10:
			ex10();
			break;
		case 11:
			ex11();
			break;
		case 12:
			hw1();
			break;
		case 13:
			hw2();
			break;
		case 14:
			hw3();
			break;
		case 15:
			hw4();
			break;
		case 16:
			hw5();
			break;
		case 17:
			hw6();
			break;
		case 18:
			hw6_1();
			break;
		case 19:
			hw6_2();
			break;
		case 20:
			hw6_3();
			break;
		case 21:
			hw6_4();
			break;
		
		default:
			break;
		}

		system("pause");
		system("cls");
	}

}