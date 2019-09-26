#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[20] = { 0 };
	system("shutdown -s -t 120");
	char password[] = { "你真帅" };
	
	while (1)
	{
		printf("请输入密码：\n");
		scanf("%s", a);
		if (strcmp(a, password) == 0)
		{
			printf("密码正确，取消关机");
			system("shutdown -a");
			break;
		}
		else
		{
			printf("密码错入，请重新输入");
		}
	}
	return 0;
}