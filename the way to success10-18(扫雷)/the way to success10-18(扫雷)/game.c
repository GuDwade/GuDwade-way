#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char Board[ROWS][COLS], int row, int col,char set)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Board[i][j] = set;
		}
	}
	
}
void DisBoard(char board[ROWS][COLS], int row, int col)
{
	int i;
	int j;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void Set(char board[ROWS][COLS], int row, int col)
{
	int count = EasyCount;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int MaiCount(char mai[ROWS][COLS], int x, int y)
{   
return  mai[x - 1][y - 1] + mai[x - 1][y] + mai[x - 1][y + 1] +
		mai[x][y - 1] + mai[x][y + 1] +
		mai[x + 1][y - 1] + mai[x + 1][y] + mai[x + 1][y + 1] - 8 * '0';

}

void Find(char mai[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int max = 0;
	int x = 0;
	int y = 0;
	while (max<row*col - EasyCount)
	{

		printf("请输入坐标：>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			if (mai[x][y] == '1')
			{
				printf("游戏结束\n");
				DisBoard(mai, ROW, COL); 
				break;
			}
			else
			{
				int count = MaiCount(mai,x, y);
				show[x][y] = count + '0';
				DisBoard(show, ROW, COL);
				max++;
			}
		}
		else
		
		{
			printf("坐标错误，请重新输入\n");

		}
	}
	if (max = row*col - EasyCount)
	{
		printf("恭喜成功\n");
		DisBoard(mai, ROW, COL);
	}

}