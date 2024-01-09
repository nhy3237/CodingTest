#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int k)
{
	int answer = 0;

	double x = pow(n, 2) / pow(10, k);
	double div = 0.0;
	double mod = modf(x, &div);

	int mod2 = mod * pow(10, k);

	if (n == mod2)
	{
		answer = n;
		cout << answer;
		return answer;
	}

	return 0;
}

int main()
{
	int k = 1; int n = 0; int function = 0;
	cin >> n;

	for (int i = n - 1; i > 0; i--)
	{
		while (trunc(i / pow(10, k)) > 0) // 자릿수
		{
			k++;
		}

		function = solution(i, k);
		if (function) return function;
	}
}
