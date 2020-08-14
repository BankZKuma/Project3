#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int x[1000][1000], y[1000][1000], ans[1000][1000];
int row, col;
int num(int Q)
{
	int i, j;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			 ans[i][j] = Q == 1 ? x[i][j] + y[i][j] : x[i][j] - y[i][j];
		}
	}
	return ans[i][j];
}
int main()
{
	int Q;
	printf(":::::::::You can enter 1 or 0 1equal Addtion 0equal Subtract:::::::::::  ");
	scanf_s("%d", &Q);
	printf("Enter row : ");
	scanf_s("%d", &row);
	printf("Enter col : ");
	scanf_s("%d", &col);
	printf("::::::::::First Matrix :::::::::::\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", &x[i][j]);
		}
	}
	printf("::::::::::Second Matrix :::::::::::\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", &y[i][j]);
		}
	}
	num(Q);
	printf("::::::::::Result Matrix :::::::::::\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d", ans[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
