#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap1(int *px,int *py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
void swap2(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	swap2(a, b);
	printf("a=%d\tb=%d\n", a, b);
	swap1(&a,&b);
	printf("a=%d\tb=%d\n", a, b);
	return 0;
}