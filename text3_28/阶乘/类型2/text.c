#define _CRT_SECURE_NO_WARNINGS
//���㣺1!+2!+3!+......+n!

#include <stdio.h>
int JC(int m)
{
	int i = 0;
	int ret = 1;
	for(i = 1; i <= m; i++)
	{
		ret *= i;
	}
	return ret;  //����n!
}
int main()
{
	int n = 0;
	int sum = 0;
	int a = 0;
	printf("������n��ֵ\n");
	scanf("%d", &n);
	for(a = 1; a <= n; a++)
	{
		sum = sum + JC(a);  //�ۼ���������Ϊ1!+2!+3!+......+n!
	}
	printf("\nsum=%d\n",sum);
	return 0;
}