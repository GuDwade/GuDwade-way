#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[20] = { 0 };
	system("shutdown -s -t 120");
	char password[] = { "����˧" };
	
	while (1)
	{
		printf("���������룺\n");
		scanf("%s", a);
		if (strcmp(a, password) == 0)
		{
			printf("������ȷ��ȡ���ػ�");
			system("shutdown -a");
			break;
		}
		else
		{
			printf("������룬����������");
		}
	}
	return 0;
}