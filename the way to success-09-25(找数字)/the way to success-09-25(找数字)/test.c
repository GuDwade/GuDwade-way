#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[] = {2,3,5,6,7,8,9};
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (a[i] == 10)
//		{
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			break;
//		}
//	}
//	if (i = sz)
//		printf("��Ǹû����Ҫ�ҵ���\n");
//	return 0;
//}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,};
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int a=0;
	printf("��������Ҫ�ҵ�����:\n");
	scanf("%d",&a);
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a>arr[mid])
		{
			left = mid + 1;
		}
		else if (a < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
	}
	if (left >right)
		printf("��Ǹû����Ҫ�ҵ�����\n");
	}