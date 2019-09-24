#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main()
{   
	char a[] = { "hello world" };
	char b[] = { "###########" };
	int left = 0;
	int right = strlen(a) - 1;
	while (left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];
		printf("%s\n", b);
		Sleep(1000); /*(ºÁÃëÎªµ¥Î»)*/
		system("cls");
		left++;
		right--;
		
	}
	
	return 0;
}