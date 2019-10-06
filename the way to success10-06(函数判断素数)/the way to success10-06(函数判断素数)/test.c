#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int judge(int x)
{
	int i = 0; 
	for (i = 2; i < x; i++)
	{
		if (x%i == 0)
		{
			return 1;
		}
		
	}
	return 0;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = judge(n);
	if (ret == 1)
		printf("%d是素数\n",n);
	else
		printf("%d不是素数\n", n);
	return 0;
}