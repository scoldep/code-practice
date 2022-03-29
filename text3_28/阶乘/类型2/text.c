#define _CRT_SECURE_NO_WARNINGS
//计算：1!+2!+3!+......+n!

#include <stdio.h>
int JC(int m)
{
	int i = 0;
	int ret = 1;
	for(i = 1; i <= m; i++)
	{
		ret *= i;
	}
	return ret;  //返回n!
}
int main()
{
	int n = 0;
	int sum = 0;
	int a = 0;
	printf("请输入n的值\n");
	scanf("%d", &n);
	for(a = 1; a <= n; a++)
	{
		sum = sum + JC(a);  //累加起来，即为1!+2!+3!+......+n!
	}
	printf("\nsum=%d\n",sum);
	return 0;
}