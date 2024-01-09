#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int N, count; //단어의 개수, 그룹 단어의 개수
	char str[101];
	char ch;

	scanf("%d", &N);
	count = N;
	getchar();
	
	for (int j = 0; j < N; j++)
	{	
		int  len = 0, i = 0;

		while (1)
		{
			ch = getchar();

			if (ch != '\n')
			{
				str[i] = ch;
				str[i + 1] = '\0';
				i++;
				len++;
			}
			else break;
		}

		int xCount = count;

		for (int k = 0; k < len; k++)
		{
			for (int l = k + 1; l < len; l++)
			{
				if (str[k] == str[l] && str[l] != str[l - 1])
				{
					count--;
					break;
				}
			}
			if (xCount != count) break;
		}
	}

	printf("%d", count);

	return 0;
}