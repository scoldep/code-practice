#define _CRT_SECURE_NO_WARNINGS
//闰年问题
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
	printf("请输入一个年份：\n");  //提示语
	scanf("%d", &i);  //输入一个值赋予i
	if (leap_year(i) == 1)  //闰年返回1
	{
		printf("yes");
	}
	else  //非闰年
	{
		printf("no");
	}
	return 0;
 }