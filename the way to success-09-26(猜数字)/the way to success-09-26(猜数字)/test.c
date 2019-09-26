#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*******************\n");
	printf("****1.开始游戏*****\n");
	printf("****0.退出游戏*****\n");
	printf("*******************\n");
}
void game()
{
	int a = 0;
	int guess = 0;
	a = rand()%100+1; /*(先调用srand生成起点)*/
	/*printf("%d\n", a);*/
	while (1)
	{
		printf("请输入猜的数字:\n");
		scanf("%d", &guess);
		if (a > guess)
		{
			printf("猜小了\n");
		}
		else  if (a<guess)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}

	}
}
int main()
{
	int input;
	srand((unsigned)time(NULL));
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
		break;
		}

		}while (input);
	
	return 0;

}