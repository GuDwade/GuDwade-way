#include<stdio.h>
int main()
{
	int count = 0;
	int i = 100;
	while (i <=200)
	{
		int j = 2;
		while (j < i)
		{
			if (i%j == 0)
			{ 
				break;
			}
			j ++;
		}
		if (j == i)
		{
			count++;
			printf("%d\t",i);

		}
			i++;
}
	printf("\ncount=%d\n", count);
	return 0;
}