#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    int max = 0;
    int temp = 0;

    if (n % 2 == 0) max = n / 2;
    else max = n / 2 + 1;

    for (int i = 1; i < max; i++)
    {
        temp = i;

        for (int j = i + 1; j <= max; j++)
        {
            temp += j;
            if (temp > n) break;

            if (temp == n)
            {
                answer++;
                break;
            }
        }
    }
    return answer + 1;
}