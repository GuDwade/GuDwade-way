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
	printf("最大公约数为%d\n", n);
	printf("最小公倍数为%d\n", mo*no / n);
	return 0;
}
