#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	//数组名是什么
	//数组名是首元素地址
	//有两个例外
	//1.sizeof(数组名)-数组名表示整个数组-计算的是整个数组的大小 单位是字节
	//2.&数组名-数组名表示整个数组-取出的是整个数组的地址

	int arr[10] = { 0 };
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	//printf("%p\n", &arr[0]);
	//printf("%p", arr);
	return 0;
}