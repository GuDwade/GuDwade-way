#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int i, max;
	//int a[10] = { 1, 2, 3, 4, 5, 8, 9,11,23,66};
	///*printf("please input ten mumbers\n");
	//for (i = 0; i < 10; i++)
	//scanf("%d", &a[i]);*/
	//max = a[0];
	//for (i = 1; i < 10;i++)
	//{
	//	if (a[i]>max)
	//	{
	//		max = a[i];	
	//	}
	/*}
	
	printf("max=%d\n", max);*/
	int i, max;
	int a[10];
	printf("请输入十个整数：\n");
	for (i = 0; i < 10; i++)/*建位置*/
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 1; i < 10; i++)/*作比较*/
	{
		if (a[i]>max)
		max = a[i];
	}
	printf("max=%d", max);
	return 0;
}