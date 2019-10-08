#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0; 
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d\t", i);
			count++;
		}
		if (i / 10 == 9)
		{
			printf("%d\t", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}