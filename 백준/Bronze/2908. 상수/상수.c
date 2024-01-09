#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char* pWord, int size);

int main()
{
	int A, B;
	char wordA[4], wordB[4];

	scanf("%s %s", wordA, wordB);
	int size = sizeof(wordA) / sizeof(wordA[0]);

	swap(wordA, size -1);
	swap(wordB, size -1);

	A = atoi(wordA);
	B = atoi(wordB);

	if (A > B)
	{
		printf("%d", A);
	}
	else
	{
		printf("%d", B);
	}
	return 0;
}

void swap(char* pWord, int size)
{
	char temp;

	for (int i = 0; i < size; i++)
	{
		temp = pWord[i];
		pWord[i] = pWord[size - 1 - i];
		pWord[size - 1 - i] = temp;

		if (i + 1 == size - i - 1 - 1) break;
	}
}