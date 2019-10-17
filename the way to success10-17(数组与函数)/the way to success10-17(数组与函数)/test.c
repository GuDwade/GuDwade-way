#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Sorted(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n / 2; i++)
//	{
//		int j =n-i-1;
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int a[10] = { 10, 9, 8, 7, 6, 5, 3, 4, 2, 1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	printf("初始数组为:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	Sorted(a, sz);
//	printf("排序数组为:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
void  Sorted(int *x, int n)
{
	int mid = (n -1)/ 2;
	int *p;
	int  tmp;
	int *j = x+ n - 1;
	for (p = x; p < x + mid; p++,j--)
	{
		tmp = *p;
		*p = *j;
		*j = tmp;
	}
	/*int *p;
	int m = (n - 1) / 2;;
	int tmp;
	int *i;
	int *j;
	j = x + n - 1;
	p = x + m;
	for (i = x; i < p; i++,j--)
	{
		tmp = *i;
		*i = *j;
		*j = tmp;
	}*/

}
int main()
{
	int a[10] = { 10, 9, 8, 7, 6, 5, 3, 4, 2, 1 };
	int *p = &a;
	int sz = sizeof(a) / sizeof(a[0]);
	printf("初始数组为:\n");
	for (p = a; p < a + sz; p++)/*注意p = a; p < a + sz;*/
	{
		printf("%d ", *p);
	}
	printf("\n");
	Sorted(a, sz);
	printf("排序数组为:\n");
	for (p = a; p < a + sz; p++)
	{
		printf("%d ", *p);
	}
	printf("\n");
	return 0;
}