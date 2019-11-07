#pragma once
#include<stdlib.h>
#include<string.h>
#define ROW 9
#define COL  9
#define minenum 10

#define ROWS ROW+2
#define COLS  COL+2
//≥ı ºªØ∆Â≈Ã 
void InitBoard(char board[][ROWS],int row,int col,char set);

//¥Ú”°∆Â≈Ã
void Show(char board[][ROWS],int row,int col); 
//…Ë÷√¿◊ 
void SetMine(char board[][ROWS],int row,int col);
//…®¿◊ void FindMine(char mine[][ROWS],char mineInfo[][ROWS],int row,int col); 