#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("****************\n");
	printf("*****1. play ***\n");
	printf("*****0. exit ***\n");
	printf("****************\n");
}
void game()
{
	char mai[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mai, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisBoard(show, ROW, COL);
	Set(mai, ROW, COL);
	/*DisBoard(mai, ROW, COL);*/
	Find(mai,show, ROW, COL);
	
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	menu();
	do
	{
		printf("请选择：>\n");
		scanf("%d", &input);
		switch (input)
		{case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
				break;
		default:
			printf("输入错误，重新选择\n");
			break;

		}
	}while(input);
}
int main()
{
	test();
	return 0;
}