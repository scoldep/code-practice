#define _CRT_SECURE_NO_WARNINGS
//��������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//-----A.�¶��ˣ���"��ϲ��"����Ϸ����
//-----B.�´��ˣ��������´��ˣ����ǲ�С�ˣ������£�ֱ����Ϸ����
//3.��Ϸ����һֱ�棬������Ϸ����

#include <stdio.h>  //ʹ���˿⺯��printf()
#include <stdlib.h>  //ʹ���˿⺯��srand()
void game()  //������Ϸ���в��֣��˺���ֻ���д�ӡ���޷���ֵ
{
	int ret = rand() % 100 + 1;  //����һ��1-100����
	int guess = 0;  //�µ�����
	while (1)  //�жϲ���
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;  //ֻ�в¶ԣ�����������ѭ��
		}
	}
}

void menu()  //�˵�����
{
	printf("****************\n");
	printf("*****1.play*****\n");
	printf("*****0.exit*****\n");
	printf("****************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //����ʱ�������һ���������NULL--��ָ��
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);  //�ڴ˴�ѡ��1��0
		switch (input)
		{
		case 1:  //ѡ��1������game()
			game();
			break;  
		case 0:  
			printf("�˳���Ϸ\n");
			break;  
		default:  //ѡ�����
			printf("ѡ�����������ѡ��\n");
			break;  
		}
	} while (input);
	return 0;
}