#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//int main()
//{   
//	char a[] = { "hello world" };
//	char b[] = { "###########" };
//	int left = 0;
//	int right = strlen(a) - 1;
//	while (left <= right)
//	{
//		b[left] = a[left];
//		b[right] = a[right];
//		printf("%s\n", b);
//		Sleep(1000); /*(毫秒为单位)*/
//		system("cls");
//		left++;
//		right--;
//		
//	}
//	
//	return 0;
//}
int main()
{
	char a[] = {"\0"};
	char b[] = { "###########" };
	int left = 0;
	int right = strlen(b) - 1;
	while (left <= right)
	{
		a[left] = b[left];
		printf("%s\n", a);
		Sleep(1000); /*(毫秒为单位)*/
		/*system("cls");*/
		left = left + 2;

	}

	return 0;
}