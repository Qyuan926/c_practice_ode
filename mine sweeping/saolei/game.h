#pragma once
#include<stdlib.h>
#include<string.h>
#define ROW 9
#define COL  9
#define minenum 10

#define ROWS ROW+2
#define COLS  COL+2
//��ʼ������ 
void InitBoard(char board[][ROWS],int row,int col,char set);

//��ӡ����
void Show(char board[][ROWS],int row,int col); 
//������ 
void SetMine(char board[][ROWS],int row,int col);
//ɨ�� void FindMine(char mine[][ROWS],char mineInfo[][ROWS],int row,int col); 