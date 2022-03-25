//练习：试求100-200之间有多少个素数，并输出
#include <math.h> //使用了库函数sqrt()，需要引用头文件<math.h>
#include <stdio.h> //使用库函数printf(),需要引用头文件<stdio.h>
int is_prime(int n) //自定义一个用于判断的函数"is_prime"；n为被除数，即需要判断的数
{
	int j = 0; //定义除数j
	for(j = 2; j <= sqrt(n); j++) //用2-sqrt(n)之间的数去试除
	{
		if (n % j == 0) //若能整除，说明这个数不是素数
		{
			return 0; //非素数返回0
		}
	}
	return 1; //素数返回1
}

int main()
{
	int i = 0; //定义一个整型变量i,即为需要去判断的数
	int count = 0; //定义一个整型变量count,充当计数器
	for(i = 100; i <= 200; i++) //i的范围：100-200
	{
		if (is_prime(i) == 1) //返回1为素数
		{
			count++; //计数器+1
			printf("%d ", i); //打印素数
		}
	}
	printf("\n%d\n",count); //打印计数器count
	return 0;


}
