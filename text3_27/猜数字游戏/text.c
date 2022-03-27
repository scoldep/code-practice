#define _CRT_SECURE_NO_WARNINGS
//猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//-----A.猜对了，就"恭喜你"，游戏结束
//-----B.猜错了，会告诉你猜大了，还是猜小了，继续猜，直到游戏结束
//3.游戏可以一直玩，除非游戏结束

#include <stdio.h>  //使用了库函数printf()
#include <stdlib.h>  //使用了库函数srand()
void game()  //定义游戏运行部分，此函数只进行打印，无返回值
{
	int ret = rand() % 100 + 1;  //生成一个1-100的数
	int guess = 0;  //猜的数字
	while (1)  //判断部分
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;  //只有猜对，才能跳出此循环
		}
	}
}

void menu()  //菜单部分
{
	printf("****************\n");
	printf("*****1.play*****\n");
	printf("*****0.exit*****\n");
	printf("****************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //利用时间戳产生一个随机数，NULL--空指针
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);  //在此处选择1或0
		switch (input)
		{
		case 1:  //选择1，进入game()
			game();
			break;  
		case 0:  
			printf("退出游戏\n");
			break;  
		default:  //选择错误
			printf("选择错误，请重新选择\n");
			break;  
		}
	} while (input);
	return 0;
}