#define _CRT_SECURE_NO_WARNINGS
//计算n的阶乘

#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("请输入n的值：\n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)  //i控制循环次数
	{
		ret *= i;  //ret为最终结果
	}
	printf("n!=%d\n", ret);
	return 0;
}