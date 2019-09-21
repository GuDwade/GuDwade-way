#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("请输入正常值\n");
//		break;
//}
//		return 0;
//}
//{int day = 0;()break具体作用
//scanf("%d", &day);
//switch (day)
//{
//case 1:
//	
//case 2:
//	
//case 3:
//	
//case 4:

//case 5:
//	printf("weekday\n");
//	break;
//case 6:
//	
//case 7:
//	printf("weekend\n");
//	break;
//default:
//	printf("请输入正常值\n");
//	break;
//}
//	
//		return 0;
//	}
//
{
	int n = 5;
	int m = 2;
	switch(n)
 	{ case 1:
		m++; 
	case 2:
		n++;
	case 3:
		switch (n)
		{case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d", m, n);
		return 0;
}