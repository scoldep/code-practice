#define _CRT_SECURE_NO_WARNINGS
//�ݹ�ʵ��n��k�η�

#include <stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return n * Pow(n, -k);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	printf("������n��k��ֵ��\n");
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}