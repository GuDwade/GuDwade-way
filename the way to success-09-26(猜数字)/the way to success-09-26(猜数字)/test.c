#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*******************\n");
	printf("****1.��ʼ��Ϸ*****\n");
	printf("****0.�˳���Ϸ*****\n");
	printf("*******************\n");
}
void game()
{
	int a = 0;
	int guess = 0;
	a = rand()%100+1; /*(�ȵ���srand�������)*/
	/*printf("%d\n", a);*/
	while (1)
	{
		printf("������µ�����:\n");
		scanf("%d", &guess);
		if (a > guess)
		{
			printf("��С��\n");
		}
		else  if (a<guess)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
		break;
		}

		}while (input);
	
	return 0;

}