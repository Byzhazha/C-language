//#define _CRT_SECURE_NO_WARNINGS	
//#include<stdio.h>
////int main()
////{
////	int a = 2;
////	int b = a << 1;      //把a的二进制位向左移动一位
////	int c = 10;
////	int d = a >> 1;//右移：1.算术   右边丢弃 左边补原符号位  2.逻辑  右边丢弃 左边补0
////	printf("b=%d", b);//二进制表示形式 负数： 原码补码反码 反码符号位不变 按位取反  补码是反码+1
////	return 0;//计算机中的数据按补码形式存储，因此在进行位运算时，直接操作的是补码。正数的原码、反码和补码是其本身。
////}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001      两个都是1才能得到1
//	int d = a | b;//只要有1 该位就是1
//	int e = a ^ b;//异或   相同为0  不同为1
//	//不用第三个变量 交换a和b的值
//	//法1  有缺陷 数字大容易溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a=%d b=%d", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a,b); //两个相同数字异或得0  任何数字和0异或是他本身 
//}