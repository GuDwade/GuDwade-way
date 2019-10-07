#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < i + 1;j++)
		{
			printf(" ");
		}
		for(j = 0; j < 2 * (n-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}