#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m, n, r, mo, no;
	scanf("%d%d", &m, &n);
	mo = m;
	no = n;
	while (m%n>0)
	{
		r = m%n;
		m = n;
		n = r;
	}
	printf("���Լ��Ϊ%d\n", n);
	printf("��С������Ϊ%d\n", mo*no / n);
	return 0;
}
