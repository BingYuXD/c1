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


		printf("1.跳脫序列與格式碼的應用\n");
		printf("2.餘數運算子\n");
		printf("3.遞增與遞減運算子\n");
		printf("4.邏輯運算子\n");
		printf("5.巢狀 if 敘述的練習\n");
		printf("6.if-else-if 敘述的應用\n");
		printf("7.if 與 else 的配對問題\n");
		printf("8.條件運算子的範例\n");
		printf("9.switch 敘述的範例\n");
		printf("10.while迴圈的範例\n");
		printf("11.以巢狀while迴圈改寫九九乘法表\n");
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
		printf("請輸入要執行範例  案0結束  :");

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