#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	//��������ʲô
	//����������Ԫ�ص�ַ
	//����������
	//1.sizeof(������)-��������ʾ��������-���������������Ĵ�С ��λ���ֽ�
	//2.&������-��������ʾ��������-ȡ��������������ĵ�ַ

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