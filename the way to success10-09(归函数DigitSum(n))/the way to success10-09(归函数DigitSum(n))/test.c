#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int digitsum(int n)
{
	int i = 0;
	int j = 0;
	if (n > 0)
	{
		i = n % 10;
		j = n / 10;
		return i + digitsum(j);
	}
	else if (n < 0)
	{
		return digitsum(-n);
	}
	else
		return 0;
}
int main()
{
	int a = 0;
	int sum = 0;
	scanf("%d", &a);
	sum = digitsum(a);
	printf("sum=%d\n", sum);
	return 0;
}