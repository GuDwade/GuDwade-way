#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void  move(char x, char y)
{
	printf("%c->%c\n",x, y);
}
void hannuota(int n, char one, char two, char three)
{

	void  move(char x, char y);
	if (n == 1)
	{
		move( one, three);
	} 
	else
	{
		hannuota( n-1, one,three,two);
		move(one, three);
		hannuota(n - 1, two, one, three);
	}
}
int main()
{
	int a = 0;
	void hannuota(int n, char one, char two, char three);
	printf("输入要搬运的碟子数:>\n", a);
	scanf("%d", &a);
	printf("过程为:\n");
	hannuota( a, 'A', 'B', 'C');
	return 0;
}