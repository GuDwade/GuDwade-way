#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b =0;
	int t=0;
	printf("请输入两个整数:\n");
	scanf("%d%d", &a,&b);/*scanf里面不加换行符*/
	while (t = a%b)
	{
		a = b;
		b = t;}
	printf("最大公约数为：%d\n", b);
	return 0;
}