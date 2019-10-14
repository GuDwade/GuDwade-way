#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void game();
void menu();
void ShowBoard(char b[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char JudgeWinner(char board[ROW][COL], int row, int col);
static int Full(char board[ROW][COL], int row, int col);