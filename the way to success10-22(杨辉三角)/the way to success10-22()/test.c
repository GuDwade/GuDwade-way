#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
int main()
{
	int i, j;
	int A[N][N];
	for (i = 0; i<N; i++)
		A[i][0] = 1, A[i][i] = 1;
	for (i = 1; i<N; i++)
	for (j = 1; j<i; j++)
		A[i][j] = A[i - 1][j] + A[i - 1][j - 1];
	for (i = 0; i<N; i++)
	for (j = 0; j <= i; j++)
	if (j == i)
		printf("%d \n", A[i][j]);
	else
		printf("%d ", A[i][j]);

}

