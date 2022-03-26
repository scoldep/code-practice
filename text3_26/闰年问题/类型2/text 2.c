#define _CRT_SECURE_NO_WARNINGS
//闰年问题：判断1000到2000之间有多少个闰年，并输出
//判断闰年的两种方法：符合下列两条件之一即为闰年
//-----条件1：能被4整除且不能被100整除
//-----条件二：能被400整除

#include <stdio.h>
int leap_year(int n)  //自定义一个判断闰年的函数leap_year();定义一个整型变量n即为判断的年份
{
	return (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0));  //判断n是否为闰年；若是闰年则返回1
}

int main()
{
	int i = 0;  //定义一个整型变量i
	int count = 0;  //计数器
	for (i = 1000; i <= 2000; i++)  //生成1000到2000的年份并循环
	{
		if (leap_year(i) == 1)  //是闰年
		{
			count++;  //计数器+1
			printf("%d ", i);  //打印闰年
		}
	}
	printf("\ncount=%d\n",count);
	return 0;
}