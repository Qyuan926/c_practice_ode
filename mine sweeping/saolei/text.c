#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void MENU()
{
	printf("###########################################\n");
	printf("############��ӭ������������Ϸ#############\n");
	printf("###############����1����ʼ��Ϸ#############\n");
	printf("###################0���˳���Ϸ#############\n");
	printf("###########################################\n");
}
void game()
{
	//char arr[ROWS][COLS];
	//InitBoard(arr, ROW, COL, '*');
	//Show(arr, ROW, COL);
	char Minein[ROWS][COLS];
	char Mine[ROWS][COLS];
	InitBoard(Minein,ROWS,COLS,'*');
	InitBoard(Mine,ROWS,COLS,'0');
	Show(Minein, ROWS, COLS);
	SetMine(Mine, ROW, COL);
	Show(Minein, ROWS, COLS);

	
}


int main()
{
	int n = 0;
	do{
		MENU();
		printf("���������֣�");
		scanf("%d", &n);
		switch (n)
		{
		case 1: game();
			break;
		case 0:printf("�˳���Ϸ");
			break;
		default :
			printf("������涨����");
			break;
		}
		
	} while (1);
	return 0;
}