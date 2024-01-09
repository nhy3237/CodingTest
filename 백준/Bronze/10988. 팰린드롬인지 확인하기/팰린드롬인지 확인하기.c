#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char ch;
	int len = 0, i = 0, res = 1;
	
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

	for (int j = 0; j < len; j++)
	{
		if (1 == len - j && str[j] == str[len - j -1]) break;
		if (str[j] != str[len - j -1])
		{
			res = 0;
			break;
		}
	}

	printf("%d", res);
	
	return 0;
}