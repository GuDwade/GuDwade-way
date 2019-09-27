#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, k;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				int y, z;
				y = i*100+j*10+k;
				z = pow(i, 3) + pow(j, 3) + pow(k, 3);
				if (y == z)
				{
					printf("%d\n", y);
				}
			}
		}
	}
	return 0;

}

