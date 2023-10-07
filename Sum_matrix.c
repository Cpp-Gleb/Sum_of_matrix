#include <stdio.h>
int main()
{
	int N, i;
	scanf("%d", &N);
	int a[N][N];
	int sum1 = 0;
	for(i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			int tmp;
			scanf("%d", &tmp);
			a[i][j] += tmp;
		}
	}
	printf("\n");
	for(i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
