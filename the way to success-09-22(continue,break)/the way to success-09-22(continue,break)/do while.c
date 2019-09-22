#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do{
//		i++;
//		if (i == 5)
//			break;
//	printf("%d", i);
//	} while (i <= 10);
//	
//	return 0;
//
//}
int main()
{
	int i = 0;
	do{
		i++;
		if (i == 5)
			continue;
		printf("%d", i);
	} while (i <10);

	return 0;

}