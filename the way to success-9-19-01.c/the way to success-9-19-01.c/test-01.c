#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b ,t;
	a = 3;
	b = 33;
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	/*�Ӽ��� �ͼ�ȥһ����*/
	t = a;
	a = b;
	b = t;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return 0;
}

