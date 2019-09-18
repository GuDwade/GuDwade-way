#include<stdio.h>
int main()
{
	int year = 1000;
	while (year <= 2000)
	{
		
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d\t", year);
				
			}
		}
		else if(year%400==0)
			printf("%d\t", year);
		
		year++;
		
	}
	
	printf("\ncount=%d\n", count);
	return 0; 
}