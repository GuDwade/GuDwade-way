#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int function(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n*function(n, k - 1);
	}

}

int main()
{
	int n = 0;
	int k = 0;
	int y = 1;
	printf("底数为:\n");
	scanf("%d", &n);
	printf("指数为:\n");
	scanf("%d", &k);
	y = function(n, k);
	printf("答案为：%d\n",y);
	return 0;
}
