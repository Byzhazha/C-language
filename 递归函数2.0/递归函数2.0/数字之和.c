#define _CRT_SECURE_NO_WARNINGS	
// ����һ������ÿλ֮�� ���ݹ�ʵ�֣�
#include<stdio.h>
int Digitsum(int n)
{
	if (n > 9)
	{
		return Digitsum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	int num = 1729;
	int sum = Digitsum(num);
	printf("%d", sum);
	return 0;
}