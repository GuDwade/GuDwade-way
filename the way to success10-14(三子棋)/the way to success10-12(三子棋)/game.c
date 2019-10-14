#define _CRT_SECURE_NO_WARNINGS 1
#include"define.h"
void menu()
{
	printf("**********************\n");
	printf("*******1.开始游戏*****\n");
	printf("*******0.退出游戏*****\n");
	printf("**********************\n");
}
void ShowBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);/*注意空格*/
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col-1 )
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标错误，请重新输入\n");
		}
	}

}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	x = rand() % row;
	y = rand() % col;
	while (1)
	{

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
}
static int Full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}

	return 1;
}
char JudgeWinner(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i<row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i<col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (Full(board, row, col) == 1)
	{
		return 'T';
	}
	return 'C';

}
void game()
{
	int i = 0;
	int j = 0;
	char ret = '0';
	char board[ROW][COL] = { 0 };
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
	ShowBoard(board, ROW, COL);
	
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		ret = JudgeWinner(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		ShowBoard(board, ROW, COL);
		ret = JudgeWinner(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}