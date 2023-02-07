//#define _CRT_SECURE_NO_WARNINGS	
//#include<stdio.h>
//int main()
//{
//	//给定一个数，要求计算其二位制中 1的个数
//	int a = 1;
//	int i = 0;
//	int count = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (((a >> i) & 1) == 1)
//	//	{	
//	//		count++;
//	//	}
//	//}
//	//printf("%d ", count);
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d ", count);
//}