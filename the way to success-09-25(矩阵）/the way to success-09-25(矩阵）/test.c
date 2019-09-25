#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	int n = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++, n++)
		{
			if (n % 5 == 0) printf("\n");
			printf("%d\t", i*j);
		}
	}
	return 0;
}