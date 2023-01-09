#define _CRT_SECURE_NO_WARNINGS	
// 计算一个数的每位之和 （递归实现）
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