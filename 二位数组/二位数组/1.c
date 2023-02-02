#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	//创建
	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	//int arr1[3][4] = { 1.2,3,4,5,6,7 };//不完全初始化，后面默认为0
	//int arr2[3][4] = { {1,2,3,4},{5,6,7,8} };//行可省略 列不可
	int arr[][4] = { {1,2},{3,4},{4,5} };
	int i = 0;
	int j = 0;
	int *p = &arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *p);
		p++;
	}
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		//printf("%d ", arr[i][j]);//输出每个元素
	//		printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//二维数组在内存中也是连续存放的
	//	}
		/*printf("\n");*/
	/*}*/
}