#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10] = { 0 };
	int tr = sizeof(arr) / sizeof(arr[0]);
	memset(arr, 1, 10 * sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}