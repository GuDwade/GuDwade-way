#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 22; i += 2)
	{
		if (i <= 11)
		{
			for (j = 1; j <= i; j++)
				printf("*");
		}
		printf("\n");
		if (i >= 11)
		{
			for (j = i; j < 22; j++)
				printf("*");
		}
		printf("\n");
	}
	return 0;
}