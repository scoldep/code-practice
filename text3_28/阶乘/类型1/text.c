#define _CRT_SECURE_NO_WARNINGS
//����n�Ľ׳�

#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("������n��ֵ��\n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)  //i����ѭ������
	{
		ret *= i;  //retΪ���ս��
	}
	printf("n!=%d\n", ret);
	return 0;
}