#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum;
	int row, col;
	int i, j;
	int x[100][100], y[100][100];
	printf("Enter row and col : ");
	scanf("%d %d", &row, &col);
	printf("First Matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf_s("%d", &x[i][j]);
		}
	}
	printf("Second Matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf_s("%d", &y[i][j]);
		}
	}
	printf("Sum");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			sum = y[i][j] + x[i][j];
		}
		printf("\n");
	}
	for (i = 0; i < row; i++)
	{
		printf("[");
		for (j = 0; j < col; j++)
		{
			printf("%d\t ", sum);
		}
		printf("]");
		printf("\n");
	}
	return 0;
}