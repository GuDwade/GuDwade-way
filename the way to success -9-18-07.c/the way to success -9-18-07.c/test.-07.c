#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("������������������>");
	scanf("%d%d", &num1, &num2);
	int sum;
	sum = num1 + num2;
	printf("sum=%d", sum);
	return 0;
}