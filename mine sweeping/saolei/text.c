#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void MENU()
{
	printf("###########################################\n");
	printf("############欢迎来到三子棋游戏#############\n");
	printf("###############输入1：开始游戏#############\n");
	printf("###################0：退出游戏#############\n");
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
		printf("请输入数字：");
		scanf("%d", &n);
		switch (n)
		{
		case 1: game();
			break;
		case 0:printf("退出游戏");
			break;
		default :
			printf("请输入规定数字");
			break;
		}
		
	} while (1);
	return 0;
}