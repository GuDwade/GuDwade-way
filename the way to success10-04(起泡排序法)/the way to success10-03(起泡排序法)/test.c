#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = {11,6,23,88,65,3,7,99,45,23};
	int i = 0;
	int j = 0;
	int t = 0;
	/*printf("please input ten mumbers\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", a[i]);
	}
	printf("\n");*/
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i]>a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	printf("the sorted numbers:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}