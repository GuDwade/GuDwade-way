#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Sorted(int arr[], int sz)
//{
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	int t = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < sz ; j++)
//		{
//			if (arr[j] < arr[k])
//			{
//			   t=arr[k];
//			   arr[k] = arr[j];
//			   arr[j] = t;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int a[] = { 23, 33, 10, 44, 99 };
//	int i = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", a[i]);
//	}
//	printf("\n");
//	Sorted(a, sz);
//	printf("Ñ¡ÔñÅÅÐòÎª£º\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
void Sorted(int *j, int sz)
{
	int*p = j;
	int tmp;
	for (p = j; p < p + sz; p++)
	{
		int * x = p;
		int * t = p + 1;
		for (t = p + 1; t < t + sz - p; t++)
		{
			if ((*t) < (*x))
			{
				tmp = *x;
				*x = *t;
				*t = tmp;
			}
		}
	}

}
int main()
{
	int a[] = { 23, 33, 10, 44, 99 };
	int sz = sizeof(a) / sizeof(a[0]);
	int* p = &a;
	for (p=a; p < a+sz; p++)
	{
		printf("%d\t", *p);
	}
	printf("\n");
	Sorted(p, sz);
	printf("Ñ¡ÔñÅÅÐòÎª£º\n");
	for (p = a; p < a + sz; p++)
	{
		printf("%d\t", *p);
	}
	printf("\n");
	return 0;
}