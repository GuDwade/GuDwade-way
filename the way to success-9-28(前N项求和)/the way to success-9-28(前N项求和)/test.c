#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int k = 0;
	scanf("%d%d", &a, &n);
	for (i = 1; i <= n; i++)
	{
		k = k * 10 + a;
		sum = sum + k;
	}
	printf("sum=%d\n", sum);
	return 0;
}