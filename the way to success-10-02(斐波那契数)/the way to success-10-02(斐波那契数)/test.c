#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
main()

{

	int f1=1;
	int f2 = 1;
	int i;
	for (i = 1; i <= 20; i++)
	{
		printf("%d\t%d\t", f1, f2);
		f1 = f1 + f2;/*ǰ��������������ֵ����������*/
		f2 = f1 + f2; /*ǰ��������������ֵ����������*/

	}

}
