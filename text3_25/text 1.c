//��ϰ������100-200֮���ж��ٸ������������
#include <math.h> //ʹ���˿⺯��sqrt()����Ҫ����ͷ�ļ�<math.h>
#include <stdio.h> //ʹ�ÿ⺯��printf(),��Ҫ����ͷ�ļ�<stdio.h>
int is_prime(int n) //�Զ���һ�������жϵĺ���"is_prime"��nΪ������������Ҫ�жϵ���
{
	int j = 0; //�������j
	for(j = 2; j <= sqrt(n); j++) //��2-sqrt(n)֮�����ȥ�Գ�
	{
		if (n % j == 0) //����������˵���������������
		{
			return 0; //����������0
		}
	}
	return 1; //��������1
}

int main()
{
	int i = 0; //����һ�����ͱ���i,��Ϊ��Ҫȥ�жϵ���
	int count = 0; //����һ�����ͱ���count,�䵱������
	for(i = 100; i <= 200; i++) //i�ķ�Χ��100-200
	{
		if (is_prime(i) == 1) //����1Ϊ����
		{
			count++; //������+1
			printf("%d ", i); //��ӡ����
		}
	}
	printf("\n%d\n",count); //��ӡ������count
	return 0;


}
