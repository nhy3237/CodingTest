#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, rank, x[50], y[50]; // 전체 사람 수, 덩치 등수, 키, 몸무게

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}

	for (int i = 0; i < N; i++)
	{
		rank = 1;
		for (int j = 0; j < N; j++)
		{
			if (i == j) continue;
			if (x[i] < x[j] && y[i] < y[j])
			{
				rank += 1;
			}
		}
		printf("%d ", rank);
	}
	
	return 0;
}