#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    vector <int> n1;
    long long answer = 0;

    while (n > 0)
    {
        n1.push_back(n % 10);
        n /= 10;
    }

    for (int i = 0; i < n1.size() - 1; i++)
    {
        for (int j = i + 1; j < n1.size(); j++)
        {
            if (n1[i] > n1[j])
            {
                int temp = n1[i];
                n1[i] = n1[j];
                n1[j] = temp;
            }
        }
    }

    for (int i = 0; i < n1.size(); i++)
    {
        answer += n1[i] * pow(10, i);
    }
    
    return answer;
}