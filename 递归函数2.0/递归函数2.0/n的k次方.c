#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
//编写一个函数实现的k次方，使用递归实现
double Pow(int n,int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return n * (Pow(n, k - 1));
	else
		return 1.0 / (Pow(n, -k));
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}
