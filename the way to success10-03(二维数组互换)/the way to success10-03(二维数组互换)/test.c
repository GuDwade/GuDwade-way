#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
int main()
{
	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int b[3][2] = { 0 };
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 2; i++)
		{
			printf("%5d", b[j][i]);
			
		}
		printf("\n");
	}

	return 0;
}