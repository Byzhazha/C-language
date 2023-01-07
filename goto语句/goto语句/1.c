//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////关机程序 只要运行起来，电脑就在一分钟之内关机，如果输入我是猪，就取消关机
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 600");
//
//again:
//	printf("如果输入我是猪，则取消关机");
//	scanf("%s", input);     //数组名本来就是地址
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}