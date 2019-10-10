#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int qiuhe(int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < y ; i++)
	{
		j = j + x;
		x = x * 10 +x;
		
	}
	return j;

}
int main()
{   int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int sum = 0;
	sum = qiuhe(a, n);
	printf("sum=%d\n", sum);
	return 0;
}