#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int swap(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰa=%d b=%d\n", a, b);
	swap(&a,& b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
}