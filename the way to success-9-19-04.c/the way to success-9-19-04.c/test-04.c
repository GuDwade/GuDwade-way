#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b =0;
	int t=0;
	printf("��������������:\n");
	scanf("%d%d", &a,&b);/*scanf���治�ӻ��з�*/
	while (t = a%b)
	{
		a = b;
		b = t;}
	printf("���Լ��Ϊ��%d\n", b);
	return 0;
}