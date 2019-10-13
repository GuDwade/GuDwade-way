#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int StrLehgth(char *arr)
//{
//	if (*arr == '\0')
//
//		return 0;
//	else
//		return 1 + StrLehgth(arr + 1);
//
//}
//int main()
//{
//	char a[] = "abcdef";
//	char *p = &a;
//	int len = StrLehgth(p);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//	char arr3[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	return 0;
//}
int strlength(char*arr)
{
int count = 0;
while (*arr != '\0')
{
	count++;
	arr++;
}
return count;
}
void reserve(char *arr)
{
	
	int len = strlength(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);
	*(arr + len - 1)='\0';
	if (strlength(arr + 1) > 0)
	{
		reserve(arr + 1);
	}
	*(arr + len - 1) = tmp;
}
int main()
{
	char arr[] = "hello";
	reserve(arr);
	printf("%s\n", arr);
	return 0;
}