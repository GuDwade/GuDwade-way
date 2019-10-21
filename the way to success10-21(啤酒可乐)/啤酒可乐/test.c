#define _CRT_SECURE_NO_WARNINGS 1
/*啤酒每罐2.3元，饮料每罐1.9元。小明买了若干啤酒和饮料，一共花了82.3元。我们还知道他买的啤酒比饮料的数量少，
请你计算他买了几罐啤酒。

这是蓝桥杯的一道题，我们可以使用暴力搜索即可解出：

如果82.3全买啤酒最多能买82.3 / 2.3 = 35瓶
如果82.3全买饮料最多能买82.3 / 1.9 = 43瓶*/ 
#include<stdio.h>
int main()
{
	int bear = 0;
	int cola = 0;
	for (bear = 0; bear < 35; bear++)
	{
		for (cola = 0; cola < 43; cola++)
		{
			if (2.3*bear + 1.9*cola == 82.3&& bear < cola)
				printf("啤酒数量为%d\n", bear);
		}
	}
	return 0;
}
