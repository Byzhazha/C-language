#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	//����
	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	//int arr1[3][4] = { 1.2,3,4,5,6,7 };//����ȫ��ʼ��������Ĭ��Ϊ0
	//int arr2[3][4] = { {1,2,3,4},{5,6,7,8} };//�п�ʡ�� �в���
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
	//		//printf("%d ", arr[i][j]);//���ÿ��Ԫ��
	//		printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//��ά�������ڴ���Ҳ��������ŵ�
	//	}
		/*printf("\n");*/
	/*}*/
}