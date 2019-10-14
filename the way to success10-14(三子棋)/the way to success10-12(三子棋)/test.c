#define _CRT_SECURE_NO_WARNINGS 1
#include"define.h"
int main()
{
	int a = 0;
	srand((unsigned)time(NULL));
	do{
		menu();
		printf("请选择：\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (a);
	return 0;
}