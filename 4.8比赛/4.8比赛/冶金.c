#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int sort(int X[],int n)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
			if (X[j] > X[j + 1])
			{
				tmp = X[j];
				X[j] = X[j + 1];
				X[j + 1] = tmp;
			}
	}
}
int main()
{
	int Z[1000] = { 0 };
	int N,O,X;
	int z = 0;
	int z1 = 0;
	int A[10000] = {0};
	int B[10000];
	int j = 0;
	int y = 0;
	int tmp = 0;
	int max = 0;
	int max1 = 0;
	scanf("%d", &N);
	int i = 0;

	
	for (i=0;i<N;i++)
	{
		scanf("%d %d",&A[i], &B[i]);
		
		for (y = 0; y < N; y++)
		{
			if (A[y] > max)
			{
				max = A[y];
			}
		}

		for (j = 0; j < N; j++)
		{
			if (B[j] > max1)
			{
				max1 = B[j];
			}
		}
		z = max / max1;
		
	}
	printf("%d ", z);
	sort(A, N);
	sort(B, N);
	for (i = 1; i <N; i++)
	{
		while (A[i+1] / z == B[i+1])
		{
			z=z-1;
		}
	}

	
	printf("%d\n",z+2);
	return 0;
	
}