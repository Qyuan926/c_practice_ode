#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void InitBoard(char board[][ROWS], int row, int col, char set)
{
	//memset (board[ROWS][ROWS], set, sizeof(board[ROWS][ROWS] / board[0][0]));
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{	
		for (j = 0; j <= col; j++)
		{
			board[i][j] = set;
		}
	}
}
void Show(char board[][ROWS], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row - 1; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i < row - 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col-2; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[][ROWS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = minenum;
	x = rand() % row + 1;
	y = rand() % col + 1;
	while (count != 0)
	{
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
