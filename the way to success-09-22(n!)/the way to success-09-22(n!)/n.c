#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
	/*int i = 0;
	int n = 0;
	int m = 1;
	scanf("%d", &n);
	for (i = 1; i <=n; i++)
	{
		m = m*i;
	}
	printf("%d",m);
	return 0;
}*/
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	printf("ret = %d\n", ret);
//
//	return 0;
//}
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	for(n=1; n<=3; n++)
	{
		ret = 1;
		for(i=1; i<=n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("sum = %d\n", sum);

	return 0;
}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &m);
//	for (n = 1; n <= m; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}