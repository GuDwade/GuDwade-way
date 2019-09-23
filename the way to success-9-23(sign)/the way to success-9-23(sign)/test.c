#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sign = 1;
	double deno = 2.0;
	double sum = 1.0;
	double term = 0;
	while (deno <= 100)
	{
		sign = -sign;
		term = sign / deno;
		sum = sum + term;
		deno = deno + 1;
	}
	printf("sum=%f\n", sum);
	return 0;
}