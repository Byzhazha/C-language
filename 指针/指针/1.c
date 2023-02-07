//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	//int a = 10;//a占四个字节
//	//int* pa = &a;//拿到的是a的4个字节中第一个字节的地址
//	//*pa = 20;
//	//printf("%d", a);
//	//return 0;
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//指针类型的意义
//	//1.指针类型决定了：指针解引用的权限有多大
//	//2.指针类型决定了，指针走一步，能走多远
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//
//
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//(p+i)相当于arr[i]
//	}
//	return 0;
//}