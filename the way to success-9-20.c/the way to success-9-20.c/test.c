#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1; j>1; --j)
			printf("");
		for (int j = 0; j < 2 * i + 1; ++j)
			printf("*");
		printf("\n");
	}

	return 0;
}