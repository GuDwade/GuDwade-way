#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game();

#define ROW 9
#define COL 9

#define EasyCount 10

#define ROWS 11
#define COLS 11

void InitBoard(char Board[ROWS][COLS], int row, int col, char set);
void DisBoard(char board[ROWS][COLS], int row, int col);
void Set(char board[ROWS][COLS], int row, int col);
void Find(char mai[ROWS][COLS], char show[ROWS][COLS] ,int row, int col);