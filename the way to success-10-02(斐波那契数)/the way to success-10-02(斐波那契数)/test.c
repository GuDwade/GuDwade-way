#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//main()
//
//{
//
//	int f1=1;
//	int f2 = 1;
//	int i;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%d\t%d\t", f1, f2);
//		f1 = f1 + f2;/*前两个数加起来赋值给第三个数*/
//		f2 = f1 + f2; /*前两个数加起来赋值给第三个数*/
//
//	}
//
//}
main()
{
	int a[20] = { 1, 1 };
	int i;
	for (i = 2; i < 20; i++)
	{
		a[i] = a[i - 2] + a[i - 1];
		
	}
	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0)printf("\n");
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}